#include "main.h"

/**
 * check_u - handle %u
 * @vlist: list of args
 * Return: return counter
 */
int check_u(va_list vlist)
{
	unsigned int a[10];
	unsigned int i = 1, msb = 1000000000, num, sum = 0;
	int counter = 0;

	num = va_arg(vlist, unsigned int);

	a[0] = num / msb;
	for (; i < 10; i++)
	{
		msb /= 10;
		a[i] = (num / msb) % 10;
	}
	for (i = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			handle_print('0' + a[i]);
			counter++;
		}
	}
	return (counter);
}
