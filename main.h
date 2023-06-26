#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>

/**
 * struct i - Modifier information
 * @alt: The # flag indicator
 * @space: + and space flag indicator
 */
typedef struct i
{
	int alt;
	char space;
} specifier_info;

/**
 * struct s - A modifier structure
 * @sym: The modifier character
 * @action: Formatting function
 */
typedef struct s
{
	char sym;
	void (*action)(int *, ...);
} specifier;

int _putchar(char c);
int _puts(char *s);
int print_number(int n);
int print_number_unsign(unsigned int n);
void print_bin(int *counter, unsigned int num);
void print_hex(unsigned long int num, int lower, int *c);
void print_oct(unsigned int num, int *c);
int _isalpha(int a);
char getROT13char(char c);
int _printf(const char *format, ...);
void specifier_c(int *counter, ...);
void specifier_s(int *counter, ...);
void specifier_S(int *counter, ...);
void specifier_percent(int *counter, ...);
void specifier_d_i(int *counter, ...);
void specifier_b(int *counter, ...);
void specifier_r(int *counter, ...);
void specifier_R(int *counter, ...);
void specifier_x(int *counter, ...);
void specifier_X(int *counter, ...);
void specifier_o(int *counter, ...);
void specifier_p(int *counter, ...);
void specifier_u(int *counter, ...);

int handle_format(const char *format, va_list args);
/* sun specifiers utility functions */
int is_flag(char c);

void (*get_specifier_action(char s))(int *counter, ...);
void _format(const char *s, va_list args, int *counter,
			 void (*action)(int *counter, ...));

#endif
