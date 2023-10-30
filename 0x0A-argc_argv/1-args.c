#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc -1);
	return (0);
}
