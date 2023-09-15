/* 0-isupper.c */
#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	/* Check if the character is within the uppercase ASCII range */
	return (c >= 'A' && c <= 'Z');
}
