#include "holberton.h"

/**
  * print_octal - Prints octal notation of a number
  * @args: List of arguments
  * @len: Current length of string
  *
  * Return: The length
  */

int print_octal(va_list args, int len)
{
	unsigned int n = va_arg(args, unsigned int);

	len += print_numbers(n, 8, "01234567");

	return (len);
}
