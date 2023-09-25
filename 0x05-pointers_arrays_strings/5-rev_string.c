#include "main.h"
/**
 * rev_string - this function reverse a string
 * @s: varable to check for
 * Return: void
 */
void rev_string(char *s)
{
	int thelen = 0, check = 0;
	char tmp;

	while (s[check++])
		thelen++;

	for (check = thelen - 1; check >= thelen / 2; check--)
	{
		tmp = s[check];
		s[check] = s[thelen - check - 1];
		s[thelen - check - 1] = tmp;
	}
}

