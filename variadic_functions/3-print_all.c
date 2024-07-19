#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* pr_char - print character
* @char_list: va_list containing the character to print
*/
void pr_char(va_list char_list)
{
printf("%c", va_arg(char_list, int));
}

/**
* pr_int - print integer
* @int_list: va_list containing the integer to print
*/
void pr_int(va_list int_list)
{
printf("%i", va_arg(int_list, int));
}

/**
* pr_float - print float
* @float_list: va_list containing the float to print
*/
void pr_float(va_list float_list)
{
printf("%f", va_arg(float_list, double));
}

/**
* pr_string - print string
* @string_list: va_list containing the string to print
*/
void pr_string(va_list string_list)
{
char *s = va_arg(string_list, char*);

if (s == NULL)
	printf("(nil)");
else
	printf("%s", s);
}

/**
* print_all - prints anything, based on the format provided
* @format: format string that defines the types of the following arguments
* @...: variadic arguments list
*/
void print_all(const char * const format, ...)
{
va_list ag_list;
unsigned int i = 0, j;
char *separator = "";
p_d p_func[] = {
	{"c", pr_char},
	{"s", pr_string},
	{"f", pr_float},
	{"i", pr_int}
};

va_start(ag_list, format);
while (format && format[i])
{
	j = 0;
	while (j < 4 && *p_func[j].f_type != format[i])
		j++;

	if (j < 4)
	{
		printf("%s", separator);
		p_func[j].print(ag_list);
		separator = ", ";
	}
	i++;
}
printf("\n");
va_end(ag_list);
}
