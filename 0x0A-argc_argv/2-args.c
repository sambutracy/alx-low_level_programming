#include <stdio.h>
#include "main.h"
/**
 * main: to print the arguments recieved
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
