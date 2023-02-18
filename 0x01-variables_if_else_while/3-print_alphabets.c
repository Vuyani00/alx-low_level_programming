#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Function that prints the alphabet in lower and uppercase
  *
  *Return: always 0 (Success)
  */
int main(void)
{
	char letter = 'a';
	char LETTER = 'A';

	for (; letter <= 'z';)
	{
		putchar(letter);
		++letter;
	}

	for (; LETTER <= 'Z';)
	{
		putchar(LETTER);
		++LETTER;
	}

	putchar('\n');
	return (0);
}
