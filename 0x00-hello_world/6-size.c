#include <stdio.h>
/**
 *  main - a program that prints the size of various data types
 *  Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("the size of %lu byte(s)\n", (unsigned long)sizeof(a));
printf("the size of %lu byte(s)\n", (unsigned long)sizeof(b));
printf("the size of %lu byte(s)\n", (unsigned long)sizeof(c));
printf("the size of %lu byte(s)\n", (unsigned long)sizeof(d));
printf("the size of %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
