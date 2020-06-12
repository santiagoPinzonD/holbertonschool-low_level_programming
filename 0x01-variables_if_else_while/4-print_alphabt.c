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
if (F != 'q')
if (F != 'e')
putchar(F);
putchar('\n');
return (0);
}
