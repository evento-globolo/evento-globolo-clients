#ifndef EVENTO_GLOBOLO_CLIENT_H
#define EVENTO_GLOBOLO_CLIENT_H
#include <stdbool.h>
typedef struct { const char *base_url; const char *bearer_token; } evento_globolo_client;
evento_globolo_client evento_globolo_client_new(const char *base_url, const char *bearer_token);
bool evento_globolo_client_health(const evento_globolo_client *client);
#endif
