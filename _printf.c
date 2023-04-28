#include "main.h"
int (*find_format(const char *format))(va_list);

/**
 * find_format - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
 */
int (*find_format(const char *format))(va_list)
{
	int i = 0;
	conv_t specs[] = {
		{"c", check_c},
		{"s", check_s},
		{"i", check_d},
		{"d", check_d},
		{"b", check_b},
		{"u", check_u},
		{"o", check_o},
		{"x", check_x},
		{"X", check_hX},
		{"p", check_p},
		{"S", check_S},
		{"r", check_r},
		{"R", check_R13},
		{NULL, NULL}
	};

	for (; specs[i].dt != NULL; i++)
	{
		if (*(specs[i].dt) == *format)
			break;
	}
	return (specs[i].f);
}

/**
 * _printf - function for format printing
 * @format: list of arguments to printing
 * Return: Number of characters to printing
 */
int _printf(const char *format, ...)
{
	va_list vlist;
	int (*f)(va_list);
	unsigned int i = 0, indx = 0;

	if (format == NULL)
		return (-1);

	va_start(vlist, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			handle_print(format[i]);
			indx++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				handle_print('%');
				indx++;
				i += 2;
				continue;
			}
			else
			{
				f = find_format(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				indx += f(vlist);
				continue;
			}
		}
		i++;
	}
	va_end(vlist);
	return (indx);
}
