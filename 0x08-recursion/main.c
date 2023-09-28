#include "main.h"
#include <stdio.h>

/* Function prototype */
int wildcmp(char *s1, char *s2);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    // ... rest of your main function
    return (0);
}
