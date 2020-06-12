#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
char x = 'a';

for (i = 48; i <= 57; i++)
putchar(i);
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
