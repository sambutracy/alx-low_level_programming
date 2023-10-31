#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_digit - checks if a value is number or not
 * @a: input value
 * Return: 0
 */
int check_digit(char *a)
{
	int i, num, lenght;

	i = 0;
	num = 0;
	lenght = strlen(a);
	while (i < lenght)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}
/**
 * main - the entry point
 * @argc: the arguement count
 * @argv: the  argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num, result;

	result = 0;
	for (i = 1; i < argc; i++)
	{
		num = check_digit(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
