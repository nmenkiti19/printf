#include "main.h"

/**
 * check_d - to check d and i specifiers
 * @vlist: list of arguments
 * Return: returns counter
 */
int check_d(va_list vlist)
{
	int a[10];
	int i = 1, msb = 1000000000, num, sum = 0, counter = 0;

	num = va_arg(vlist, int);
	if (num < 0)
	{
		num *= -1;
		handle_print('-');
		counter++;
	}
	a[0] = num / msb;
	for (; i < 10; i++)
	{
		msb /= 10;
		a[i] = (num / msb) % 10;
	}
	for (i = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum != 0 || i == 9)
		{
			handle_print('0' + a[i]);
			counter++;
		}
	}
	return (counter);
}

