#include "main.h"
#include <stdarg.h>

/**
	* _printf - prints given string in specified format
	* Description: prints given string in specified format
	* Return: int
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int format_counter = 0;
	va_list ap;

	va_start(ap, format);

	for(; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			format_counter++;
		}
	}

	return (i);
}
