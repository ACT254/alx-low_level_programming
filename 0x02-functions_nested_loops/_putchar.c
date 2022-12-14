#include <unistd.h>

/**
  * _putchar - writes the character c to std out
  * @c: The cahracter to print
  *
  * Return: ON sucess 1
  * On error, -1 is returned, and errno is set appropriately
  */
int _putchar(char c)
{
	return(write(1, &c,1));
}
