#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Function that prints out the 1st 10 natuaral numbers
  *
  *Return: always 0 (Success)
  */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}

	printf("\n");

	return (0);
}
