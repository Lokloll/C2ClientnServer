package fiber

import (
	"fmt"
	"github.com/gofiber/fiber/v2"
)

func LoadcmdPostFile(ctx *fiber.Ctx) error {
	Pfile, _ := ctx.FormFile("./public/index.html")
	return ctx.SaveFile(Pfile, fmt.Sprintf("./%s", Pfile.Filename))
}
func LoadcmdIDFile(ctx *fiber.Ctx) error {
	IDfile, _ := ctx.FormFile("./public/newClient.html")
	return ctx.SaveFile(IDfile, fmt.Sprintf("./%s", IDfile.Filename))
}
