#include "main.h"

/**
 * handle_print - prints buffer characters
 * @input: input to be printed
 * Return: chatacters printed
 */
int handle_print(char input)
{
	return (write(1, &input, 1));
}
