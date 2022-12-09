#include <stdio.h>
/**
  * main - entry point into the program 
  * Return: returns 0 if the program is successful
  */
int main()
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu bytes(s)\n",
			(unsigned long)sizeof(a));
	printf("Size of an int: %lu bytes(s)\n",
			(unsigned long)sizeof(b));
	printf("Size of a long int: %lu bytes(s)\n",
			(unsigned long)sizeof(c));
	printf("Size of a long long int: %lu bytes(s)\n",
			(unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n",
			(unsigned long)sizeof(e));
	return (0);
}
