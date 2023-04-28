#include "main.h"

/**
 * check_R13 - handle %R for rot13
 * @vlist: list of args
 * Return: return counter positionx
 */
int check_R13(va_list vlist)
{
	char *str;
	unsigned int i = 0, j = 0;
	int counter = 0;
	char in[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(vlist, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				handle_print(out[j]);
				counter++;
				break;
			}
		}
		if (!in[j])
		{
			handle_print(str[i]);
			counter++;
		}
	}
	return (counter);
}
