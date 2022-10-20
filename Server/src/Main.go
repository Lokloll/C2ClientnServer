package main

import "github.com/gofiber/fiber/v2"

func main() {
	app := fiber.New()

	app.Get("/", GetBasicDebug)
	app.Get("/test", func(ctx *fiber.Ctx) error {
		return ctx.SendString("FakeResponse")
	})

	app.Listen(":80")
}
