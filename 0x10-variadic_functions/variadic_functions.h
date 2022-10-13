#ifndef _VARIADIC_FUNCTIONS_

#define _VARIADIC_FUNCTIONS_

#include <stdio.h>
#include <stdarg.h>

/**
 * struct check - parameters to check against
 * @ch: type
 * @f: function
 *
 */
typedef struct types {
        char *ch;
        void (*f)(va_list list);
} types_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
