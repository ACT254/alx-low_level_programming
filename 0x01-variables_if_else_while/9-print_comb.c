#include <stdio.h>
/**
  * main - entry point for the program
  * Return: return 0 if program is successfully executed
  */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
