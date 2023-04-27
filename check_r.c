#include "main.h"
/**
 * check_r - handle %r to reverse
 * @vlist: list of args
 * Return: returns counter position
 */
int check_r(va_list vlist)
{
	int i = 0, counter = 0;
	char *characters;

	characters = va_arg(vlist, char *);
	if (characters == NULL)
		characters = ")llun(";
	while (characters[i])
		i++;
	for (i -= 1; i >= 0; i--)
	{
		handle_print(characters[i]);
		counter++;
	}
	return (counter);
}
