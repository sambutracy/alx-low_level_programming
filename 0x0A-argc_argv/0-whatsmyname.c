#include <stdio.h>
/**
 * main - print name of program
 * @argc: argument count
 * @argv: argument vecto
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", *argv[0]);
	}
	return (0);
}
