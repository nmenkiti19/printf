#ifndef _main_h
#define _main_h

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct conv - struct to handle various conversion specifiers
 * @dt: data type
 * @f: function call
 */
typedef struct conv
{
	char *dt;
	int (*f)(char *, va_list, int);
} conv_t;

int _printf(const char *format, ...);
int check_c(char *buffer, va_list vlist, int counter);
int check_s(char *buffer, va_list vlist, int counter);
int check_d(char *buffer, va_list vlist, int counter);
int check_percent(char *buffer, va_list vlist, int counter);

int handle_print(char *buffer, unsigned int buffer_counter);
#endif
