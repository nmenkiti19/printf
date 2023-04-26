#include "main.h"

/**
 * check_b - handle %b
 * @buffer: buffer
 * @vlist: list of args
 * @counter: counter position
 * Return: retuns counter position
 */
int check_b(char *buffer, va_list vlist, int counter)
{
	unsigned int sum = va_arg(vlist, unsigned int);
	unsigned int temp = sum;
	int bin = 1;

	while (temp > 1)
	{
		bin *= 2;
		temp /= 2;
	}

	temp = sum;
	while (bin > 0)
	{
		buffer[counter] = ('0' + temp / bin);
		temp %= bin;
		bin /= 2;
		counter++;
	}

	return (counter);
}
