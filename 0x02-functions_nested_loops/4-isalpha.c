#include "main.h"

/**
 * _isalpha - is found on the main
 *@c:is the character
 *Description:describe your code
 *Return:return 1 if is correct or 0 if incorrect
 */

int _isalpha(int c)

{
	char i;
	int alpha = 1;

	for (i = 'a'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			alpha = 1;
		}
	}
	return (alpha);
}
