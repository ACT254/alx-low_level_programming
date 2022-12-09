#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - The entry point for the program
 *
 *  Return: The function returns a value of zero
 */
int main(void)
{
	int n;
	float last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = abs(n % 10);

if(last_digit > 5)
{
	printf("Last digit of %d is %1.0f and is greater than 5\n ",n, last_digit);
}else if(last_digit == 0)
{
	printf("Last digit of %d is %1.0f and is zero\n", n, last_digit);
}else if(last_digit < 6)
{
	printf("Last digit of %d is %1.0f and is less than 6 and not zero\n", n, last_digit);
}
}
