#include "main.h"
#include <stdarg.h>
#include <stdio.h>

void _raw_print(char *string)
{
	int i = 0;

	for(; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
}

int _get_base(int num)
{
	int length = 0;

	if (num == 0)
		return (length);

	while (num / 10 != 0) {
		num /= 10;
		length++;
	}

	return (length);
}

int _pow(int num, int exponent)
{
	if (exponent == 0)
	{
		return (1);
	}
	while (exponent > 0)
	{
		return (num * _pow(num, exponent - 1));
	}

	return (-1);
}

void _print_int(int num)
{
	int base;
	int length;

	if (num == 0)
	{
		_putchar('0');
	}
	else
	{
		length = _get_base(num) + 1;;
		while (length > 0)
		{
			base = _get_base(num);
			int curNum = num / _pow(10, base);
			num = num - (curNum * _pow(10, base));
			_putchar('0' + curNum);
			length--;
		}
	}
}

/**
	* _printf - prints given string in specified format
	* Description: prints given string in specified format
	* Return: int
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int length = 0;
	va_list ap;

	va_start(ap, format);

	for(; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			length++;
		}
		else
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(ap, int));
					i++;
					length++;
					break;
				case 's':
					_raw_print(va_arg(ap, char *));
					i++;
					length++;
					break;
				case 'i':
					_print_int(va_arg(ap, int));
					length++;
					i++;
					break;
			}
		}
	}

	return (length);
}

