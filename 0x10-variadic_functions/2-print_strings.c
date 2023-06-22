#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Which will be used to print strings, followed by a new line.
 * @separator : is the string to be printed between the strings
 * @n: Is the number of sterings to be passed to the function
 * Description : if the separator is  null, itis not printed . If one of the str
 * ings is null, the  (nil ) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    char *str;

    va_start(args, n);

    for (i = 0; i < n; i++) {
        str = va_arg(args, char *);

        if (str != NULL)
            printf("%s", str);
        else
            printf("(nil)");

        if (separator != NULL && i != n - 1)
            printf("%s", separator);
    }

    va_end(args);

    printf("\n");
}

