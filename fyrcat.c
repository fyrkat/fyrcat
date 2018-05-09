#include <stdio.h>	//printf

int main(int argc, char **argv)
{
	if (argc != 2) {
		fprintf(stderr, "Usage: %s file\n", argv[0]);
	}

	FILE * fp;
	char buff[1024];

	fp = fopen(argv[1], "r");
	while (0 != fgets(buff, sizeof(buff), fp)) {
		printf("%s", buff);
	}
}
