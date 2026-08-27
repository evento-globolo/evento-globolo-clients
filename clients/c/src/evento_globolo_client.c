#include "evento_globolo_client.h"
evento_globolo_client evento_globolo_client_new(const char *base_url, const char *bearer_token) {
  evento_globolo_client value = {base_url, bearer_token}; return value;
}
bool evento_globolo_client_health(const evento_globolo_client *client) { return client != 0 && client->base_url != 0; }
