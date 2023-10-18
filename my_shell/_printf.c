#include "shell.h"

/**
 * _printf - function that prints input
 * @format: the format of the input
 * Return: printout
 */
int _printf(const char *format, ...)
{
	unsigned int m, count = 0, res;
	va_list *args;

	va_start(args, format);
	for (m = 0; format[m] != '\0'; m++)
	{
		if (format[m] != '%')
		{
			_printchar(format[m]);
		}
		else if (format[m + 1] == 'c')
		{
			_printchar(va_arg(args, *int));
			m++;
		}
		else if (format[m + 1] == 's')
		{
			res = _puts(va_arg(args, *char));
			m++;
			count += (res - 1);
		}
		else if (format[m + 1] == '%')
		{
			_printchar('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
