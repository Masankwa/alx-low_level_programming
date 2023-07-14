#include <stdio.h>
/**
 * main - prints the alphabet letters
 * Return: 0 (Success)
 */
int main(void)
{
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
putchar(alphabet[i]);
ptchar('\n');
return (0);
}
