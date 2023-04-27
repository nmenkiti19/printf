#include "main.h"

/**
 * check_b - handle %b
 * @vlist: list of args
 * Return: retuns counter position
 */
int check_b(va_list vlist)
{
	unsigned int num, msb = 2147483648, i = 1, sum = 0;
	unsigned int a[32];
	int counter = 0;

	num = va_arg(vlist, unsigned int);
	a[0] = num / msb;

	for (; i < 32; i++)
	{
		msb /= 2;
		a[i] = (num / msb) % 2;
	}
	for (i = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			handle_print('0' + a[i]);
			counter++;
		}
	}
	return (counter);
}
