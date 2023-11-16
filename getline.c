#include "shell.h"

/**
 * prompt - get user prompt
*/

void prompt(void)
{
	char *buffer = NULL;
	size_t n = 0;
	int bufferSize;

	printf("#cisfun$ ");

	while (getline(&buffer, &n, stdin) != EOF)
	{
		bufferSize = strlen(buffer);
		if (bufferSize > 0 && buffer[bufferSize - 1] == '\n')
			buffer[bufferSize - 1] = '\0';

		getToken(buffer);

		printf("#cisfun$ ");
	}

	free(buffer);

	printf("\n");

}
