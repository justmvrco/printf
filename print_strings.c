#include "holberton.h"
/**
  *print_Str - prints the string.
  *@args: list of arguments.
  *@len: number of chars.
  *
  *Description: any char whose ascii code appears between 0 and 127,
  *will be replaced with \x.
  *Return: length of characters printed.
  */
int print_Str(va_list args, int len)
{
	int i;

	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	i = 0;
	while (str[i] != '\0')
	{

		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			if (str[i] < 15)
			{
				len += _printf("\\x0");
				len += _printf("%X", str[i]);
				i++;
			}
			else
			{
				len += _printf("\\x");
				len += _printf("%X", str[i]);
				i++;
			}
		}
		else
		{
			len += _putchar(str[i]);
			i++;
		}
	}
	return (len);
}
