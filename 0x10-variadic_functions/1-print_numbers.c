#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Check
 *@separator: pointer
 *@n: unsigned int
 *Return: Always
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list ap;

	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", (va_arg(ap, unsigned int)));
		if ((count != (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
