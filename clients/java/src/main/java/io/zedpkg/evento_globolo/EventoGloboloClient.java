package io.zedpkg.evento_globolo;
import java.net.URI;
public record EventoGloboloClient(URI baseUrl, String bearerToken) {
  public boolean health() { return baseUrl != null; }
}
