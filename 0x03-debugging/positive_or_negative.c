#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * main - assigns a random number to int n
 * it executes the program, and prints n
 * Return: Always 0 (Success)
 */
int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
