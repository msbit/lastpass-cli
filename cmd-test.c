#include <stdio.h>
#include "config.h"

int cmd_test()
{
	printf("%s\n", config_path("env"));
	printf("%s\n", config_path("alias.ls"));
	printf("%s\n", config_path("plaintext_key"));
	printf("%s\n", config_path("agent.sock"));
	printf("%s\n", config_path("iterations"));
	printf("%s\n", config_path("username"));
	printf("%s\n", config_path("verify"));
	printf("%s\n", config_path("session_uid"));
	printf("%s\n", config_path("session_sessionid"));
	printf("%s\n", config_path("session_token"));
	printf("%s\n", config_path("session_server"));
	printf("%s\n", config_path("session_privatekey"));
	printf("%s\n", config_path("blob"));
	printf("%s\n", config_path("upload-queue/15514988830000.lock"));
	return 0;
}
