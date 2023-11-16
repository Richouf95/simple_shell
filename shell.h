#ifndef _SHELL_H_
#define _SHELL_H_

/**
 * Includes
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * Prototypes
*/
void prompt(void);
void getToken(char *userPrompt);
void execute(char **arg);

#endif
