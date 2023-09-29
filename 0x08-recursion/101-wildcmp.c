#include "main.h"

/**
 * wildcmp - Compare two strings with wildcard '*'
 * @s1: The first string
 * @s2: The second string with wildcard '*'
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/* If we reach the end of both strings, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match or s2 has '*', move to the next characters */
	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1));

	/* If s2 has '*', either skip it or use it to match one or more characters in s1 */
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	/* If the characters don't match and s2 doesn't have '*', strings are not identical */
	return (0);
}
