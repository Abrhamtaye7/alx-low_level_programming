## 0x10-variadic_functions 
	1. 0sum them all
		#include <stdarg.h>
		#include <stdio.h>
		#include <stdlib.h>

		/**
 		* sum_them_all - sum given inputs
 		* @n: input params
		* Return: sum of numbers
 		*/

		int sum_them_all(const unsigned int n, ...)
		{
			va_list lst;
			unsigned int sum = 0, i;

			va_start(lst, n);
			for (i = 0; i < n; i++)
		{
			int n = va_arg(lst, unsigned int);
	
			sum += n;
		}
		va_end(lst);
		return (sum);
		}
	2. 1 print number.c 
		#include <stdarg.h>
		#include <stdio.h>
	
		/**
		 * print_numbers - prints numbers
		 * @separator: character to separe numbers
		 * @n: n for number input
		 */
	
		void print_numbers(const char *separator, const unsigned int n, ...)
		{
			register unsigned int i;
			va_list x;
	
			va_start(x, n);
			for (i = 0; i < n; i++)
			{
				printf("%d%s", va_arg(x, int), (separator && i != n - 1) ? separator : "");
			}
			va_end(x);
			printf("\n");
		}


	3. 2 print string.c
		#include <stdio.h>
		#include <stdarg.h>
		#include "variadic_functions.h"

		/**
		 * print_strings - print strings
		 * @separator: string to be printed between the strings
		 * @n: number of strings passed to the function
		 */

		void print_strings(const char *separator, const unsigned int n, ...)
		{
			register unsigned int i;
			va_list num;

			va_start(num, n);
			for (i = 0; i < n; i++)
			{
				char *str = va_arg(num, char *);

				if (str == NULL)
				{
					printf("nill");
				}
				else
				{
					if (i < (n - 1) && separator != 0)
					{
						printf("%s%s", str, separator);
					}
					else
					{
						printf("%s", str);
					}
				}
			}
			va_end(num);
			printf("\n");
		}
	4. 3 print all.c
		#include <stdarg.h>
		#include <stdio.h>
		#include "variadic_functions.h"

		/**
		 * print_char - function that prints character
		 * @argptr: argument list pointer to character to be printed
		 */

		void print_char(va_list argptr)
		{
			char character;

			character = va_arg(argptr, int);
			printf("%c", character);
		}

		/**
		 * print_int - function that prints integer
		 * @argptr: argument list pointer to integer to be printed
		 */

		void print_int(va_list argptr)
		{
			int num_i;

			num_i = va_arg(argptr, int);
			printf("%i", num_i);
		}

		/**
		 * print_float - function that prints a float
		 * @argptr: argument list pointer to float to be printed
		 */

		void print_float(va_list argptr)
		{
			float num_f;

			num_f = va_arg(argptr, double);
			printf("%f", num_f);
		}

		/**
		 * print_string - function that prints string
		 * @argptr: argument list pointer to string to be printed
		 */

		void print_string(va_list argptr)
		{
			char *str;

			str = va_arg(argptr, char*);

			if (str == NULL)
			{
				printf("(nil)");
				return;
			}
			printf("%s", str);
		}

		/**
		 * print_all - function that prints anything
		 * @format: list of types of arguments passed to the function
		 * @...: number of arguments
		 * Return: Nothing
		 */
		
		void print_all(const char * const format, ...)
		{
			va_list arguments;
			int index, arg_len;
			char *separator = "";
		
			prints_t fmt_list[] = {
				{"c", print_char},
				{"i", print_int},
				{"f", print_float},
				{"s", print_string}
			};
			va_start(arguments, format);
			index = 0;
			while (format && (*(format + index)))
			{
				arg_len = 0;
				while (arg_len < 4 && (*(format + index) != *(fmt_list[arg_len].notation)))
				{
					arg_len++;
				}
				if (arg_len < 4)
				{
					printf("%s", separator);
					fmt_list[arg_len].print_dType(arguments);
					separator = ", ";
				}
				index++;
			}
			printf("\n");
			va_end(arguments);
		}


