#include "main.h"

/**
 * check_x - handle %x
 * @vlist: list of args
 * Return: returns counter position
 */
int check_x(va_list vlist)
{
	unsigned int a[8];
	unsigned int i = 1, msb = 268435456, num, sum = 0;
	char sub;
	int counter = 0;

	num = va_arg(vlist, unsigned int);
	sub = 'a' - ':';
	a[0] = num / msb;
	for (; i < 8; i++)
	{
		msb /= 16;
		a[i] = (num / msb) % 16;
	}
	for (i = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				handle_print('0' + a[i]);
			else
				handle_print('0' + sub + a[i]);
			counter++;
		}
	}
	return (counter);
}
