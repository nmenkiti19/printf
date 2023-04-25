#include "main.h"

/**
 * check_c - returns character
 * @buffer: buffer
 * @vlist: list of arguments
 * @counter: counter
 * Return: return counter
 */
int check_c(char *buffer, va_list vlist, int counter)
{
	char character = va_arg(vlist, int);

	buffer[counter] = character;
	return (++counter);
}
