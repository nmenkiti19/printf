#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list vlist;
	char buffer[1024];
	int i = 0, j = 0, temp = 0, counter = 0;
	conv_t specs[] = {
		{"c", check_c}, {"s", check_s}, {"%", check_percent}, {"i", check_d},
		{"d", check_d},	{"\0", NULL}
	};

	if (!format)
		return (-1);
	va_start(vlist, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++, temp = counter;
			for (j = 0; specs[j].dt != NULL; j++)
			{
				if (format[i] == '\0')
					break;
				if (*format == *(specs[j].dt))
				{
					counter = specs[j].f(buffer, vlist, counter);
					break;
				}
			}
			if (counter == temp && format[i])
				i--, buffer[counter] = format[i], counter++;
		}
		else
			buffer[counter] = format[i], counter++;
		i++;
	}
	va_end(vlist);
	buffer[counter] = '\0';
	handle_print(buffer, counter);
	return (counter);

}

