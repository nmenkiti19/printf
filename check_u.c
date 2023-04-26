#include "main.h"

/**
 * check_u - handle %u
 * @buffer: buffer
 * @vlist: list of args
 * @counter: counter
 * Return: return counter
 */
int check_u(char *buffer, va_list vlist, int counter)
{
	int dec = 1;
	unsigned int temp;
	unsigned int sum;

	sum = va_arg(vlist, unsigned int);

	temp = sum;

	while (temp > 9)
	{
		dec *= 10;
		temp /= 10;
	}

	temp = sum;
	while (dec > 0)
	{
		buffer[counter] = ('0' + temp / dec);
		temp %= dec;
		dec /= 10;
		counter++;
	}

	return (counter);
}
