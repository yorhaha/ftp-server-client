#include "common.h"

unsigned int listen_port = 21;
char* listen_address = NULL;
char* root_path = NULL;

void send_message(Session* state, const char* msg) {
    write(state->sockfd, msg, strlen(msg));
}