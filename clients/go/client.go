package client
type Client struct { Endpoint string }
func (c Client) HealthURL() string { return c.Endpoint + "/healthz" }
