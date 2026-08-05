pub struct Client { pub endpoint: String }
impl Client { pub fn health_url(&self) -> String { format!("{}/healthz", self.endpoint) } }
