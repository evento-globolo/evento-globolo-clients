export class Client { constructor(readonly endpoint: string) {} healthUrl() { return `${this.endpoint}/healthz`; } }
