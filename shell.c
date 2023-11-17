#include "shell.h"

/**
 * main - main function
 * Return: 0
*/

int main(void)
{
	char *buffer = NULL;
	size_t n = 0;
	int bufferSize;

	printf("#cisfun$ ");

	while (getline(&buffer, &n, stdin) != EOF)
	{
		bufferSize = strlen(buffer);
		buffer[bufferSize - 1] = '\0';
		if (strcmp(buffer, "exit") == 0)
		{
			free(buffer);
			exit(0);
		}
		getToken(buffer);
		printf("#cisfun$ ");
	}

	free(buffer);

	printf("\n");

	return (0);
}
