#include <stdio.h>
/**
 * main - A program that prints a size of various types on the computer types
 * Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lo byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lo byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lo bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a long int: %lo bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lo bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
