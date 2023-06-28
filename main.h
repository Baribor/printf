#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>

/**
 * struct i - Modifier information
 * @alt: The # flag indicator
 * @space: + and space flag indicator
 * @length: length flag indicator
 * @width: width flag indicator
 * @precision: Precision indicator
 * @count: Chars that make up the specifier
 * @modifier: The modifier to use
 */
typedef struct i
{
	int alt;
	char space;
	char length;
	int width;
	int precision;
	char modifier;
	int count;
} specifier_info;

/**
 * struct s - A modifier structure
 * @sym: The modifier character
 * @action: Formatting function
 */
typedef struct s
{
	char sym;
	int (*action)(va_list, specifier_info);
} specifier;

int _putchar(char c);
int _puts(char *s);
int _puts_times(char *s, int n);
int print_number(long int n);
int print_number_unsign(unsigned long int n);
void print_bin(int *counter, unsigned int num);
void print_hex(unsigned long int num, int lower);
void print_oct(unsigned long int num);
int _isalpha(int a);
int is_digit(char c);
char getROT13char(char c);
int _printf(const char *format, ...);
int specifier_c(va_list, specifier_info);
int specifier_s(va_list, specifier_info);
int specifier_S(va_list, specifier_info);
int specifier_percent(va_list, specifier_info);
int specifier_d_i(va_list, specifier_info);
int specifier_b(va_list, specifier_info);
int specifier_r(va_list, specifier_info);
int specifier_R(va_list, specifier_info);
int specifier_x(va_list, specifier_info);
int specifier_X(va_list, specifier_info);
int specifier_o(va_list, specifier_info);
int specifier_p(va_list, specifier_info);
int specifier_u(va_list, specifier_info);

int handle_format(const char *format, va_list args, specifier_info info);
/* sun specifiers utility functions */
int is_flag(char c);
int is_length(char c);
int is_modifier(char c);
void print_char_times(int n, char c);
int _pow(int x, int y);

specifier_info get_info(const char *format, va_list args);
void fill_flag_info(specifier_info *info, char flag);
int fill_width(specifier_info *info, const char *s, int i);
int fill_precision(specifier_info *info, const char *s, int i);
void init_specifier_info(specifier_info *info);

int get_int_length(long int n, int radix);
int _max(int a, int b);

int (*get_specifier_action(char s))(va_list, specifier_info);

#endif
