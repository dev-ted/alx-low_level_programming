#include "variadic_functions.h"

/**
 *print_strings - prints strings, followed by new line
 *@separator:  string printed between strings
*@n:  number of strings to be passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);
		if (!separator)
			printf("%s", string);
		if (!string)
			string = "(nil)";
		else if (separator && i == 0)
			printf("%s", string);
		else
			printf("%s%s",  separator,  string);
	}
	printf("\n");
	va_end(list);
}
