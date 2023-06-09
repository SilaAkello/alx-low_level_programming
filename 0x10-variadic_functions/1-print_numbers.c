#include"variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * *print_numbers - will print the numbers foloowed by a new line.
 * @separator : which is the string to be printed between numbers
 * @n : which is the numbers f intergers passed to the function
 * @... : Is a variable number of numbers which are to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);

    for (i = 0; i < n; i++) {
        printf("%d", va_arg(args, int));

        if (separator != NULL && i != n - 1)
            printf("%s", separator);
    }

    va_end(args);

    printf("\n");
}

