#include "main.h"

/**
 * handle_print - prints buffer characters
 * @buffer: pointer
 * @buffer_size: buffer size
 * Return: characters printed
 */
int handle_print(char *buffer, unsigned int buffer_size)
{
	return (write(1, buffer, buffer_size));
}
