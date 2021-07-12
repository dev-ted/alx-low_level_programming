#include "holberton.h"
#include <stdio.h>

/**
 * main - multiplies 2 numbers.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int a = _atoi(argv[1]);
	int b = _atoi(argv[2]);
	int sum;

	if (argc < 2 || argc > 2)
	{
		printf("error\n");
		return (1);
	}
	sum = a * b;
	printf("%d\n", sum);
	return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
