package main

type Client struct {
	ClientID             string
	Active               bool
	Reason               string
	HasRecievedFirstTask bool

	Clientinfos ClientInfo
}

type ClientInfo struct {
	InternalIP string
	ExternalIP string
	HostName   string
	UserName   string

	DidCallIn bool
}

type Clients struct {
	Clients []*Client
}
