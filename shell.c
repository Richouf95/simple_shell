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

	while (1)
	{
		printf("#cisfun$ ");

		if (getline(&buffer, &n, stdin) != -1)
		{
			bufferSize = strlen(buffer);
			if (bufferSize > 0 && buffer[bufferSize - 1] == '\n')
				buffer[bufferSize - 1] = '\0';

			getToken(buffer);
		}
		else
			break;
	}

	printf("\n");

	return (0);
}
