#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf(%d "is greater than 5" , n;
				}
				else if (n == 0)
				{
				printf(%d is 0 , n);
				}
				else 
				{
				printf(%d "is less than 6 and not 0" , n);
	return (0);
}
