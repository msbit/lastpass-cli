#include "config.h"

int cmd_test(int argc, char **argv)
{
	printf("config_path(\"\"):                                 %s\n", config_path(""));
	printf("config_path(\"upload-queue\"):                     %s\n", config_path("upload-queue"));
	printf("config_path(\"upload-queue/15514988830000.lock\"): %s\n", config_path("upload-queue/15514988830000.lock"));
	return 0;
}
