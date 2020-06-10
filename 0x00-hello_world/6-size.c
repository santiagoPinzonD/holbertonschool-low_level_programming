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
long long1;
float float1;
long long long2;
printf("size of a char: %d byte(s)\n", sizeof(char1));
printf("size of a int: %d byte(s)\n", sizeof(int1));
printf("size of a long int: %d byte(s)\n", sizeof(long1));
printf("size of a long long int: %d byte(s)\n", sizeof(long2));
printf("size of a float: %d byte(s)\n", sizeof(float1));
return (0);
}
