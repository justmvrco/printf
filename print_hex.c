#include "holberton.h"

/**
  * print_hex - Prints hex notation of a number
  * @args: List of arguments
  * @len: Current length of string
  *
  * Return: The length
  */

int print_hex(va_list args, int len)
{
	unsigned int n = va_arg(args, unsigned int);

	len += print_numbers(n, 16, "0123456789abcdef");

	return (len);
}

/**
  * print_heX - Printd hexes
  * @args: Argument list
  * @len: Current lenght of string
  *
  * Return: Length
  */

int print_heX(va_list args, int len)
{
	unsigned int n = va_arg(args, unsigned int);

	len += print_numbers(n, 16, "0123456789ABCDEF");
	return (len);
}
