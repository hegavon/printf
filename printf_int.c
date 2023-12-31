#include "main.h"

/**
 * p_int - Function prints an integer
 * @args: Argument
 * Return: Number of characters printed
 */
int p_int(va_list args)
{
	int d = va_arg(args, int);
	int num, end = d % 10, digit, exp = 1;
	int i = 1;

	d = d / 10;
	num = d;

	if (end < 0)
	{
		_putchar('-');
		num = -num;
		d = -d;
		end = -end;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}

		num = d;
		for (; exp > 0; exp = exp / 10)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			i++;
		}
	}

	_putchar(end + '0');
	return (i);
}

/**
 * p_dec - Function prints a decimal
 * @args: Argument
 * Return: Number of characters printed
 */
int p_dec(va_list args)
{
	int d = va_arg(args, int);
	int num, end = d % 10, digit, exp = 1;
	int i = 1;

	d = d / 10;
	num = d;

	if (end < 0)
	{
		_putchar('-');
		num = -num;
		d = -d;
		end = -end;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}

		num = d;
		for (; exp > 0; exp = exp / 10)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			i++;
		}
	}

	_putchar(end + '0');
	return (i);
}
