#include "variadic_functions.h"

/**
 * type_char - print char
 * @list: List
 */

void type_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * type_int - print int
 * @list: list
 */

void type_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * type_float - print float
 * @list: list
 */

void type_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * type_string - print string
 * @list: list
 */

void type_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - function that prints anything.
 * @format: const char * const
 *
 */

void print_all(const char * const format, ...)
{
	types_t types[] = {
		{"c", type_char},
		{"i", type_int},
		{"f", type_float},
		{"s", type_string},
		{NULL, NULL}
	};

	int x = 0, y = 0;
	va_list list;
	char *sep = "";

	va_start(list, format);

	while (format && format[x])
	{
		while (types[y].ch)
		{
			if (format[x] == *types[y].ch)
			{
				printf("%s", sep);
				types[y].f(list);
				sep = ", ";
			}
			y++;
		}
		y = 0;
		x++;
	}
	printf("\n");
	va_end(list);
}
