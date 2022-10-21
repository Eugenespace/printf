#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int _putchar(char);
int print_functions(char c, va_list *ap);
int _printf(const char *format, ...);
int exponent(int x, int y);
int print_int(va_list *);
int print_char(va_list *);
int print_float(va_list *);
int print_string(va_list *);
int print_rstring(va_list *);
int print_rev(char *s);

/**
 * struct func - func object
 * @letter: func char
 * @prnt: print function pointer
 * Descriptions: contains flag letter and corresponding print function
 **/
typedef struct func
{
	char ltr;
	int (*prnt)(va_list *);
}func_selector;





#endif /*MAIN_H*/
