#include "main.h"

/**
 * check_c - check char for printing
 * @vlist: list of arguments
 * Return: return 1
 */
int check_c(va_list vlist)
{
	char input = (char)va_arg(vlist, int);

	handle_print(input);
	return (1);
}
