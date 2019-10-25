#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Check
 *@separator: pointer
 *@n: unsigned int
 *Return: Always
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        unsigned int count;
        va_list ap;
	char *x;

        va_start(ap, n);

        for (count = 0; count < n; count++)
	{
		x = (va_arg(ap, char *));
		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");
		if ((count != (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
