#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_string(va_list arg);
void print_integer(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);

/**
 * print_string - prints strings
 * @arg: list of arguments pointing to strings to be printed
 * Return: nothing
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_integer - prints integers
 * @arg: list of arguments pointing to string to be printed
 * Return: nothing
 */

void print_integer(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_char - prints characters
 * @arg: list of arguments pointing to character to be printed
 * Return: nothing
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_float - prints decimal numbers
 * @arg: list of arguments pointing to floats to be printed
 * Return: nothing
 */

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 *          c: char
 *          i: integer
 *          f: float
 *          s: char *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
