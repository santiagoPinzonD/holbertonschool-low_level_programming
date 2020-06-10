#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char char1;
int int1;
long int long1;
long long int long2;
float float1;

printf("Size of a char: %d byte(s)\n", sizeof(char1));
printf("Size of a int: %d byte(s)\n", sizeof(int1));
printf("Size of a long int: %d byte(s)\n", sizeof(long1));
printf("Size of a long long int: %d byte(s)\n", sizeof(long2));
printf("Size of a float: %d byte(s)\n", sizeof(float1));
return (0);

}
