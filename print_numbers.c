#include "holberton.h"
/**
  * print_int - Prints number to std output
  * @args: List of arguments
  * @len: Length of string so far
  *
  * Return: The new length of the string
  */

int print_int(va_list args, int len)
{
	int n;

	n = va_arg(args, int);

	len = _putchar_int(n, len);
	return (len);
}

/**
  * _putchar_int - prints integers
  * @n: Number
  * @len: Length of string so far
  *
  * Return: The new length of the string
  */
int _putchar_int(int n, int len)
{
	unsigned long num;

	if (n < 0)
	{
		len += _putchar('-');
		num = -(unsigned int)n;
	}
	else
	{
		num = n;
	}
	len += print_numbers(num, 10, "0123456789");

	return (len);
}

/**
  * print_numbers - Prints numbers according to the specified base
  * @n: Number to print
  * @base: The base to print.
  * @digits: The digits found in this base
  *
  * Return: The length
  */

int print_numbers(unsigned long n, unsigned int base, const char *digits)
{
	if (n >= base)
		print_numbers((n / base), base, digits);
	_putchar(digits[n % base]);
	return (find_length(n, base) + 1);
}

/**
  *find_length - count length of chars to be printed
  *@n: unsigned int;
  *@base: base of number
  *
  *Return: length;
  */
unsigned int find_length(unsigned int n, int base)
{
	unsigned int count;

	count = 0;
	while (n > 0)
	{
		n = n / base;
		if (n == 0)
			break;
		count++;
	}
	return (count);
}
