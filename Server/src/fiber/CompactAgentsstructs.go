package fiber

import (
	"encoding/json"
)

var debug = ""

func MakeAgentsInfoCompact() string {
	output, _ := json.MarshalIndent(allagents, "", "\t")
	debug = "output"
	return string(output)
}
