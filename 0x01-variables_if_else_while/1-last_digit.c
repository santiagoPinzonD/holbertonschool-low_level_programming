#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	int n;
	int o;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o =  % 10;
	if (o > 5)
		printf("Last digit of %d is %d and is greater than 5\n", o);
	if (o == 0)
		printf("Last digit of %d is %d and is 0\n", o);
	if (o < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", o);
	return (0);
}
