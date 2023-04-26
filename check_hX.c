#include "main.h"
/**
 * check_hX - handle %X
 * @buffer: buffer
 * @vlist: list of args
 * @counter: counter postion
 * Return: returns counter position
 */
int check_hX(char *buffer, va_list vlist, int counter)
{
	unsigned int sum = va_arg(vlist, unsigned int);
	unsigned int temp = sum;
	int hex = 1;

	while (temp > 15)
	{
		hex *= 16;
		temp /= 16;
	}

	temp = sum;
	while (hex > 0)
	{
		buffer[counter] = (temp / hex < 9) ?
			(temp / hex + '0') : ('A' + temp / hex - 10);
		temp %= hex;
		hex /= 16;
		counter++;
	}

	return (counter);
}
