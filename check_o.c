#include "main.h"

/**
 * check_o - handle %o
 * @vlist: list of arguments
 * Return: returns counter position
 */
int check_o(va_list vlist)
{
	unsigned int a[11];
	unsigned int i = 1, msb = 1073741824, num, sum = 0;
	int counter;

	num = va_arg(vlist, unsigned int);
	a[0] = num / msb;
	for (; i < 11; i++)
	{
		msb /= 8;
		a[i] = (num / msb) % 8;
	}
	for (i = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			handle_print('0' + a[i]);
			counter++;
		}
	}
	return (counter);
}
