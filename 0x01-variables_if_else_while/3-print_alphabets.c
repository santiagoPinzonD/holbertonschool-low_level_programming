#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char F = 'a';

for (F = 'a'; F <= 'z'; F++)
putchar(F);
for (F = 'A'; F <= 'Z'; F++)
putchar(F);
putchar('\n');
return (0);
}
