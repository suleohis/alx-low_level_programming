#include <stdio.h>
/**
 * main - entry point
 * Return: always returns a value
 */
int main(void)
{
char a;
int  i;
long int li;
long long int lli;
float f;
printf("Size of a char: %zu byte(s)\n", sizeof(a));
printf("Size of an int: %zu byte(s)\n", sizeof(i));
printf("Size of a long int: %zu byte(s)\n", sizeof(li));
printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
printf("Size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
