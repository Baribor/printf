#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>

/**
 * struct s - A modifier structure
 * @sym: The modifier character
 * @action: Formatting function
 */
typedef struct s
{
	char sym;
	void (*action)(int *, void *);
} specifier;

int _putchar(char c);
int _puts(char *s);
int print_number(int n);
int print_number_unsigned(unsigned int n);
void print_bin(int *counter, unsigned int num);
void print_hex(unsigned long int num, int lower, int *c);
void print_oct(unsigned int num, int *c);
int _isalpha(int a);
char getROT13char(char c);
int _printf(const char *format, ...);
void specifier_c(int *counter, void *value);
void specifier_s(int *counter, void *value);
void specifier_S(int *counter, void *value);
void specifier_percent(int *counter, void *value);
void specifier_d_i(int *counter, void *value);
void specifier_b(int *counter, void *value);
void specifier_r(int *counter, void *value);
void specifier_R(int *counter, void *value);
void specifier_x_X(int *counter, void *value);
void specifier_o(int *counter, void *value);
void specifier_p(int *counter, void *value);
void specifier_u(int *counter, void *value);

void (*get_specifier_action(char s))(int *counter, void *value);
void _format(const char *s, va_list args, int *counter,
			 void (*action)(int *counter, void *value));

#endif
