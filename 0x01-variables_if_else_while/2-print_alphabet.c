#include <stdio.h>
/**
 * main - prints the alphabet letters
 * Return: 0 (Success)
 */
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
putchar(alphabet[i]);
ptchar('\n');
return (0);
}
