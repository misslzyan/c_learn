#include <libssh/libssh.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
	ssh_session my_ssh_session = ssh_new();
	if(my_ssh_session == NULL) {
		exit(-1);
	}
    int verbosity = SSH_LOG_PROTOCOL;
    int port = 22;
    //set options
    ssh_options_set(my_ssh_session, SSH_OPTIONS_HOST, "localhost");
    ssh_options_set(my_ssh_session, SSH_OPTIONS_LOG_VERBOSITY, &verbosity);
    ssh_options_set(my_ssh_session, SSH_OPTIONS_PORT, &port);
    ssh_options_set(my_ssh_session, SSH_OPTIONS_USER, "duanweidong");

    int rc;
    printf("connecting\n");
    rc = ssh_connect(my_ssh_session);
    if(rc != SSH_OK) {
    	fprintf(stderr, "Error connecting to jumber.sankuai.com: %s\n",
    		ssh_get_error(my_ssh_session));
    	exit(-1);
    }
    printf("connected\n");

    rc = ssh_userauth_password(my_ssh_session, NULL, "LIzhiyan333");
    if(rc!=SSH_AUTH_SUCCESS){
    	fprintf(stderr, "Error authenticating with password: %s\n",
            ssh_get_error(my_ssh_session));
    ssh_disconnect(my_ssh_session);
    ssh_free(my_ssh_session);
    exit(-1);
    }
    ssh_channel channel = ssh_channel_new(my_ssh_session);
    rc = ssh_channel_request_exec(channel, "ps aux");
    if(rc!=SSH_OK)
    {
   	 fprintf(stderr,ssh_get_error(my_ssh_session));
    }
    ssh_disconnect(my_ssh_session);
	ssh_free(my_ssh_session);
}