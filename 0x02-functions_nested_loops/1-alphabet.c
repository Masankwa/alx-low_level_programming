#include "main.h"

/**
 *main - print_alphabet - print all alphabet in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
