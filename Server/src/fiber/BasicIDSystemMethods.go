package fiber

import (
	"CSControlServer/types"
	"github.com/gofiber/fiber/v2"
)

//var Whatsempty = 0

func InitNewDebugClient(client types.Client) string {

	client = types.Client{ClientID: "test",
		Active: "true",
		Reason: "ImActive",
		Clientinfos: types.ClientInfo{
			InternalIP: "10.0.0.4",
			ExternalIP: "10.0.0.1",
			HostName:   "LOL",
			UserName:   "Username"}}

	return "success"
}

func InitNewClient(ctx *fiber.Ctx, client types.Client) types.Client {

	client = types.Client{ClientID: ctx.FormValue("ClientID"),
		Active:               ctx.FormValue("Active", "false"),
		Reason:               ctx.FormValue("Reason", "GateWayBitch"),
		HasRecievedFirstTask: ctx.FormValue("hasRecievedFirstTask", "false"),
		Clientinfos: types.ClientInfo{
			InternalIP: ctx.FormValue("InternalIP", "127.0.0.1"),
			ExternalIP: ctx.FormValue("ExternalIP", "127.0.0.1"),
			HostName:   ctx.FormValue("HostName", "testPc"),
			UserName:   ctx.FormValue("Username", "Lokloll")}}
	return client
}
