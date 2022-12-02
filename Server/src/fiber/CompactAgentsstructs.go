package fiber

import (
	"CSControlServer/types"
	"encoding/json"
)

var debug = ""

func PrintAgentsInfoCompact(agent types.Client) string {
	output, _ := json.MarshalIndent(agent, "", "\t")
	debug = "output"
	return string(output)
}
