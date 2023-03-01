#include "main.h"

/**
  *print_to_98 - prints to 98
  *
  *@n: input
  *
  *Description: prints from the given number till it reaches 98
  *
  *Return: 0 (Success)
  */

void print_to_98(int n)
{

	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
			printf(", ");
			if (n == 98)
			{
				continue;
			}
		}
		printf("\n");
	}
	else 
		{
			while (n <= 98)
			{
				printf("%d, ", n);
				n++;
				printf(", ");
				if (n == 98)
				{
					continue;
				}
			}
			printf("\n");
		}
}
