#include "main.h"


/**
 * check_p - Handle address
 * @vlist: address
 * Return: number of printed characters
 */
int check_p(va_list vlist)
{
	int counter = 0;
	unsigned int a[16];
	unsigned int i = 0, sum = 0;
	unsigned long num, msb = 1152921504606846976;
	char *input = "(nil)";

	num = va_arg(vlist, unsigned long);
	if (num == 0)
	{
		for (; input[i]; i++)
		{
			handle_print(input[i]);
			counter++;
		}
		return (counter);
	}
	handle_print('0');
	handle_print('x');
	counter = 2;

	a[0] = num / msb;
	for (i = 1; i < 16; i++)
	{
		msb /= 16;
		a[i] = (num / msb) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				handle_print('0' + a[i]);
			else
				handle_print('0' + ('a' - ':') + a[i]);
			counter++;
		}
	}
	return (counter);
}
