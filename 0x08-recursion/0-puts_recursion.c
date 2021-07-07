#include "holberton.h"

/**
 * *_puts_recursion - prints a string follwed by newline
 * @s: string to to printed
 *
 * Return: returns (0)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);

}
