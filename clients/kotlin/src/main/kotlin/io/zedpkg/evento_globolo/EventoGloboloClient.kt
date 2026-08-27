package io.zedpkg.evento_globolo
import java.net.URI
data class EventoGloboloClient(val baseUrl: URI, val bearerToken: String? = null) {
  suspend fun health(): Boolean = baseUrl.toString().isNotEmpty()
}
