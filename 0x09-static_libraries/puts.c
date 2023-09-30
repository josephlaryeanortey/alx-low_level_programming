#include <unistd.h>

/**
 * _puts - writes a string to stdout
 * @s: the string to print
 *
 * Description: This function prints a string to the standard output
 * followed by a newline character.
 */
void _puts(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1); /* add a newline character at the end */
}
