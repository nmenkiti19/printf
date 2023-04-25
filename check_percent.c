#include "main.h"

/**
 * check_percent - checks percentage character
 * @buffer: buffer
 * @vlist: list of args
 * @counter: counter
 * Return: returns counter
 */
int check_percent(char *buffer, va_list vlist, int counter)
{
	char string = va_arg(vlist, int);

	string = '%';

	buffer[counter] = string;
	return (++counter);
}
