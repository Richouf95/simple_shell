#include "shell.h"

/**
 * execute - execute user prompt
 * @arg: arg
*/

void execute(char **arg)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == -1)
	{
		perror("Error:");
		exit(EXIT_FAILURE);
	}

	if (pid == 0)
	{
		if (execve(arg[0], arg, NULL) == -1)
			perror("./shell");
	}
	else
	{
		wait(&status);
	}
}
