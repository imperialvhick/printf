#include "main.h"

/**
 * _printf - prints to stdout with format specifiers
 *
 * @format: to be printed
 * Return: no. of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list opt;
	char *str;
	int num = 0, len, i = 0;

	va_start(opt, format);
	len = strlen(format);
	while(i < len)
	{
		if (format[i] == '%')
			switch (format[i + 1])
			{
				case '%':
					putchar('%');
					i++;
					break;
				case 'c':
					putchar (va_arg(opt, int));
					i++;
					break;
				case 's':
					str = va_arg(opt, char *);
					num += _string(str);
					i++;
					break;
				case 'i':
					printf("%d", va_arg(opt, int));
					i++;
					break;
				case 'd':
					printf("%d", va_arg(opt, int));
					i++;
					break;
			}
		else
			putchar(format[i]);
		i++;
		num++;
	}
	return (num);
}
