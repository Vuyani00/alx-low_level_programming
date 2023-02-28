#include "main.h"

/**
 * _isalpha - is found on the main
 *@c:is the character
 *Description:describe your code
 *Return:return 1 if is correct or 0 if incorrect
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;
	
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
			isletter = 1;
		}
	}
	return (isletter);
}
