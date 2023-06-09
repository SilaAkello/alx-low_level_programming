
#include "main.h"
/**
 *  _strcat - function that concatenates two strings
 *  @dest: entered value
 *  @src: entered value
 *
 *  Return: void
 */


void _strcat(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}
