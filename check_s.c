#include "main.h"

/**
 * check_s - check string
 * @buffer: buffer
 * @vlist: list of args
 * @counter: counter
 * Return: returns count of string
 */
int check_s(char *buffer, va_list vlist, int counter)
{
	char *string;
	int i = 0;

	string = va_arg(vlist, char *);
	if (string == NULL)
		string = "(null)";

	if (string[0] == '\0')
	{
		buffer[counter] = '\0';
		counter++;
	}

	while (string[i] != '\0')
	{
		buffer[counter] = string[i];
		i++;
		counter++;
	}
	return (counter);
}
