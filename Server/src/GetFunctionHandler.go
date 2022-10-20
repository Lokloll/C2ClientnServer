package main

import "github.com/gofiber/fiber/v2"

func GetBasicDebug(ctx *fiber.Ctx) error {
	return ctx.SendString("ls -al")
}
