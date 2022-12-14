#include "main.h"

/**
  * main - entry point to program
  *
  * Return: On success 0
  */
int main(void)
{
	char mychar[] = "_putchar\n";
	int n;
	int _putchar(char c);

	for (n = 0; n <= 9; n++)
	{
		_putchar(mychar[n]);
	}
	return (0);
}
