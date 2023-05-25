#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function to print anything
 * @format: constant pointer
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int val;
	float frc;
	char ch;
	char *p;

	va_start(args, format);

	char *str = format;
	int i = 0;

	while (str[i])
	{
		switch (*str)
		{
			case 'd':
				{
					val = va_arg(args, int);
					printf("%d", val);
					break;
				}
			case 'f':
				{
					frc = va_arg(args, float);
					printf("%f", frc);
					break;
				}
			case 'c':
				{
					ch = va_arg(args, char);
					printf("%c", ch);
					break;
				}
			case 's':
				{
					p = va_arg(args, char *);
					printf("%s", p);
					break;
				}
		}
		i++;
	}
}
