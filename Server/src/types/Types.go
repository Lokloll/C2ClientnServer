package types

type Client struct {
	ClientID             string
	Active               string
	Reason               string
	HasRecievedFirstTask string

	Clientinfos ClientInfo
}

type ClientInfo struct {
	InternalIP string
	ExternalIP string
	HostName   string
	UserName   string
}
