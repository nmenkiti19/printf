#ifndef _main_h
#define _main_h

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#define BUFF_SIZE 1024

/**
 * struct conv - struct to handle various conversion specifiers
 * @dt: data type
 * @f: function call
 */
typedef struct conv
{
	char *dt;
	int (*f)(va_list);
} conv_t;

int _printf(const char *format, ...);
int check_c(va_list vlist);
int check_s(va_list vlist);
int check_d(va_list vlist);
int check_b(va_list vlist);
int check_o(va_list vlist);
int check_x(va_list vlist);
int check_hX(va_list vlist);
int check_u(va_list vlist);
int check_R13(va_list vlist);
int check_r(va_list vlist);
int check_p(va_list vlist);

int handle_print(char input);
#endif
