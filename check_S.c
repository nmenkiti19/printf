#include "main.h"

/**
 * check_S - Handles String and ASCII
 * @vlist: list or string args
 * Return: input count
 */
int check_S(va_list vlist)
{
	unsigned int i = 0;
	int counter = 0;
	char *input = va_arg(vlist, char *);

	if (input == NULL)
		input = "(null)";
	for (; input[i]; i++)
	{
		if (input[i] < 32 || input[i] >= 127)
		{
			handle_print('\\');
			handle_print('x');
			counter += 2;
			counter += check_x(vlist);
		}
		else
		{
			handle_print(input[i]);
			counter++;
		}
	}
	return (counter);
}
