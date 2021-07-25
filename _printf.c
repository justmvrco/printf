#include "holberton.h"
/**
  *_printf - prints formatted output.
  *@format: input.
  *
  *Return: number of chars printed or -1.
  */
int _printf(const char *format, ...)
{
	va_list args;
	int i, len;
	int (*get_ptr)(va_list, int);

	va_start(args, format);
	if (!(format))
		return (-1);
	i = 0;
	len = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				len += _putchar(format[i]);
				i++;
				continue;
			}
			if (format[i] == '\0')
				return (-1);
			get_ptr = get_print_func(format[i]);
			if (get_ptr != NULL)
				len = get_ptr(args, len);
			else
			{
				len += _putchar(format[i - 1]);
				len += _putchar(format[i]);
			}
			i++;
		}
		else
		{
			len += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
