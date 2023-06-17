#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase, followed by uppercase, and a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}

