#include <unistd.h>

/*
 * main - is the entry point
 * Description:describe the code 
 * Return:success is 0
 */
int _putchar(char* c)
{
return (write(1, &c, 1));
}
