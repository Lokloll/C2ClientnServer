package fiber

import (
	"CSControlServer/types"
)

//var Whatsempty = 0

func InitNewClient() string {

	allagents = types.Client{ClientID: "test",
		Active:               true,
		Reason:               "ImActive",
		HasRecievedFirstTask: true,
		Clientinfos: types.ClientInfo{
			InternalIP: "10.0.0.4",
			ExternalIP: "10.0.0.1",
			HostName:   "LOL",
			UserName:   "Username",
			DidCallIn:  true}}

	return "success"
}
