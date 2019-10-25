#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Check
 *@n: unsigned int
 *Return: Always
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int sum;

	if (n == 0)
		return (0);

	va_list ap;

	va_start(ap, n);
	sum = 0;
	for (count = 0; count < n; count++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
