#include "main.h"

/**
 * check_d - to check d and i specifiers
 * @buffer: buffer
 * @vlist: list of arguments
 * @counter: counter
 * Return: counter
 */
int check_d(char *buffer, va_list vlist, int counter)
{
	int dec = 1;
	unsigned int temp;
	int sum;

	sum = va_arg(vlist, int);

	if (sum < 0)
	{
		buffer[counter] = '-';
		sum *= -1;
		counter++;
	}
	temp = sum;

	if (sum == INT_MIN)
		temp++;

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

