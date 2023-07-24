#include "main.h"

/**
 */
int _printd(char *format, int num)
{
	char *buff;
	int len, i = 0;

	buff = malloc(sizeof(char) * 10);
	len = sprintf(buff, format, num);

	while (i < len)
		_putchar(buff[i++]);

	free(buff);
	return (len - 1);
}
