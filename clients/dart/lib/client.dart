class Client { Client(this.endpoint); final String endpoint; String get healthUrl => '$endpoint/healthz'; }
