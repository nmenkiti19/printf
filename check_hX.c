#include "main.h"
/**
 * check_hX - handle %X
 * @vlist: list of args
 * Return: returns counter position
 */
int check_hX(va_list vlist)
{
	unsigned int a[8];
	unsigned int i = 1, msb = 268435456, num, sum = 0;
	char sub;
	int counter;

	num = va_arg(vlist, unsigned int);
	sub = 'A' - ':';
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
