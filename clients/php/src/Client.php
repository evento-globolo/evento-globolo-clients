<?php
declare(strict_types=1);
namespace ZedPkg\EventoGlobolo;
final readonly class Client {
  public function __construct(public string $baseUrl, public ?string $bearerToken = null) {}
  public function health(): bool { return $this->baseUrl !== ''; }
}
