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
	int i = 0;

	while (token != NULL && i < 20)
	{
		tokens[i] = strdup(token);
		i++;
		token = strtok(NULL, delimiter);
	}

	tokens[i] = NULL;

	if (tokens[0] != NULL)
		execute(tokens);

}
