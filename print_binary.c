#include "holberton.h"

/**
  *print_b - check if argument is unsigned.
  *@args: list of arguments.
  *@len: number of chars printed.
  *
  *Return: len;
  */
int print_b(va_list args, int len)
{
	unsigned int n;

	n = va_arg(args, int);
	return (print_binary(n, len));
}


/**
  * print_binary - converts an unsigned int to binary.
  * @n: unsigned int to be converted.
  * @len: length of characters printd.
  *
  * Return: length.
  */
int print_binary(unsigned int n, int len)
{
	/*count chars*/
	if ((n / 2) != 0)
	{
		print_binary(n / 2, len);
	}

	_putchar((n % 2) + '0');
	len += find_length(n, 2);
	return (len + 1);
}
