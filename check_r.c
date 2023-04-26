#include "main.h"
/**
 * check_r - handle %r to reverse
 * @buffer: buffer
 * @vlist: list of args
 * @counter: counter position
 * Return: returns counter position
 */
int check_r(char *buffer, va_list vlist, int counter)
{
	int i = 0;
	char *characters;

	characters = va_arg(vlist, char *);
	if (characters)
	{
		while (characters[i] != '\0')
			i++;
		i = i - 1;
		while (i >= 0)
		{
			buffer[counter] = characters[i];
			counter++;
			i--;
		}
	}
	return (counter);
}
