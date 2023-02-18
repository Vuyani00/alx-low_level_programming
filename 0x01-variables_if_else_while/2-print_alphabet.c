#include <stdio.h>

/**
  *main - Entry point
  *Description: function will print a stream
  *of lowercase letters
  *Return: always 0 (Success)
  */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	        putchar('\n');

	return (0);
}
