#include "main.h"

/**
 * check_s - check string
 * @vlist: list of args
 * Return: returns count
 */
int check_s(va_list vlist)
{
	char *input;
	int i = 0;

	input = va_arg(vlist, char *);

	if (input == NULL)
		input = "(null)";

	while (input[i])
	{
		handle_print(input[i++]);
	}
	return (i);
}
