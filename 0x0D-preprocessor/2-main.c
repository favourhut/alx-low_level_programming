#include <stdio.h>

/**
 * main - the main of the program
 * This program would print the name 
 * of the file it was compiled from
 * followed by a new line even when the 
 * name is changed
 * Return: zero for success
 */

int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
