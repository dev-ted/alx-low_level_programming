#include "holberton.h"

/**
 * infinite_add - adds integers
 * @n1: interger to be added;
 * @n2: interger to be added;
 * @r: returned;
 * @size_r: size of buffer;
 * Return: r;
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = _strlen(n1), l2 = _strlen(n2), bn = l1 > l2 ? l1 : l2;

	int carry = 0, equation = 0;

	size_r--, l1--, l2--;

	if (bn + 1 > size_r)
		return (0);
	r[bn + 1] = '\0';
	for (; bn >= 0 && size_r >= 0; size_r--, bn--, l1--, l2--)
	{
		equation = carry;
		if (carry)
			carry = 0;
		if (l1 >= 0)
			equation += n1[l1] - '0';
		if (l2 >= 0)
			equation += n2[l2] - '0';
		if (equation > 9)
		{
			equation %= 10;
			carry = 1;
		}
		r[bn] = (equation + '0');
	}
	return (r);
}
