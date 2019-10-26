#include "variadic_functions.h"
/**
 * printch - print a character
 * @ap: My list like parameters
 * Return: Nothing.
 */
void printch(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * printint - print a integer
 * @ap: My list like parameters
 * Return: Nothing.
 */
void printint(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * printfloat - print a float number
 * @ap: My list like parameters
 * Return: Nothing.
 */
void printfloat(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * printstring - printa string
 * @ap: My list like parameters
 * Return: Nothing.
 */
void printstring(va_list ap)
{
	char *value = va_arg(ap, char*);

	if (value == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", value);
}
/**
 * print_all - Check
 *@format: pointer
 *Return: Always
 */
void print_all(const char * const format, ...)
{
	int count1, count2;
	va_list ap;
	char *separata = "";

	typarg tyar[] = {
		{"c", printch},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
		{NULL, NULL}
	};
	count1 = 0;
	va_start(ap, format);

	while (format && format[count1])
	{
		count2 = 0;
		while (count2 < 4)
		{
			if (format[count1] == *tyar[count2].c)
			{
				printf("%s", separata);
				tyar[count2].f(ap);
				separata = ", ";
			}
			count2++;
		}
		count1++;
	}
	printf("\n");
	va_end(ap);
}
