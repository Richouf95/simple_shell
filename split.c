#include "shell.h"

/**
 * getToken - split prompt content
 * @userPrompt: userPrompt
 * Return: array of token
*/

void getToken(char *userPrompt)
{
	const char *delimiter = " ";
	char **tokens = malloc(20 * sizeof(char *));
	char *token = strtok(userPrompt, delimiter);
	int i = 0, j = 0;

	while (token != NULL && i < 20)
	{
		tokens[i] = strdup(token);
		i++;
		token = strtok(NULL, delimiter);
	}

	tokens[i] = NULL;
	
	if (strcmp(tokens[0], "exit") == 0)
	{
		for (j = 0; j < i; j++)
			free(tokens[j]);

		free(tokens);

		exit(0);
	}

	if (tokens[0] != NULL)
		execute(tokens);

	for (j = 0; j < i; j++)
	{
		free(tokens[j]);
	}

	free(tokens);
}
