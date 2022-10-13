#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: const char
 * @n: const unsigned int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *ch;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ch  = (va_arg(ap, char*));
		if (ch != NULL)
			printf("%s", ch);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
