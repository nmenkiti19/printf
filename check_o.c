#include "main.h"

/**
 * check_o - handle %o
 * @buffer: buffer
 * @vlist: list of args
 * @counter: counter
 * Return: returns counter position
 */
int check_o(char *buffer, va_list vlist, int counter)
{
	unsigned int sum = va_arg(vlist, unsigned int);
	unsigned int temp = sum;
	int oct = 1;

	while (temp > 7)
	{
		oct *= 8;
		temp /= 8;
	}

	temp = sum;
	while (oct > 0)
	{
		buffer[counter] = ('0' + temp / oct);
		temp %= oct;
		oct /= 8;
		counter++;
	}

	return (counter);
}
