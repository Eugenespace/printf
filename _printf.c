#include "main.h"

/**
 * _printf - printf function replica
 * @format: string format character
 *
 * Return: number of characters printed (not including '\0')
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i, sum;

	sum = 0;
	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			sum += print_functions(format[i + 1], &arg);
			i++;
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}
	va_end(arg);
	return (sum);
}
