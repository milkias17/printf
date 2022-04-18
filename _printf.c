#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
	* _raw_print - prints string without checking format specifiers
	* @string: string to be printed
	* Description: prints string without checking format specifiers
	* Return: length of string
*/

int _raw_print(char *string)
{
	int i = 0;

	if (string == NULL)
	{
		string = "(null)";
	}

	for (; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}

	return (i);
}

/**
	* _get_base - get the base of a number
	* @num: number to get the base of
	* Description: get the base of a number
	* Return: int
*/

int _get_base(int num)
{
	int length = 0;

	if (num == 0)
		return (length);

	while (num / 10 != 0)
	{
		num /= 10;
		length++;
	}

	return (length + 1);
}

/**
	* _pow - gets the output of the number raised to an exponent
	* @num: number
	* @exponent: exponent
	* Description: gets the output of the number raised to an exponent
	* Return: int
*/

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

/**
	* _print_int - prints a number using _putchar
	* @num: number to print
	* Description: prints a number using _putchar
	* Return: void
*/

void _print_int(int num)
{
	int base;
	int length;
	int curNum;

	if (num == 0)
	{
		_putchar('0');
	}
	else
	{
		length = _get_base(num);
		while (length > 0)
		{
			base = --length;
			curNum = num / _pow(10, base);

			num = num - (curNum * _pow(10, base));
			_putchar('0' + curNum);
		}
	}
}

/**
	* _printf - prints given string in specified format
	* @format: string to print with format specifiers included
	* Description: prints given string in specified format
	* Return: int
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int length = 0;
	va_list ap;

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (; format[i] != '\0'; i++)
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
					length++;
					break;
				case 's':
					length += _raw_print(va_arg(ap, char *));
					break;
				case 'i':
				case 'd':
					_print_int(va_arg(ap, int));
					length++;
					break;
				default:
					_putchar(format[i]);
					length++;
			}
			i++;
		}
	}

	return (length);
}

