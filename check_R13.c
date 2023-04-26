#include "main.h"

/**
 * check_R13 - handle %R for rot13
 * @buffer: buffer
 * @vlist: list of args
 * @counter: counter position
 * Return: return counter positionx
 */
int check_R13(char *buffer, va_list vlist, int counter)
{
	char *characters;
	char *alphabets = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *otheralphabet = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j = 0;

	characters = va_arg(vlist, char *);
	while (characters[j])
	{
		for (i = 0; alphabets[i]; i++)
		{
			if (characters[j] == alphabets[i])
			{
				buffer[counter] = otheralphabet[i];
				break;
			}
			buffer[counter] = characters[j];
		}
		j++, counter++;
	}

	return (counter);
}
