#include "main.h"
/**
 * main - entry block
 * Description: You are not allowed to include standard libraries.
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char ermias[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(ermias[c]);
	}
	_putchar('\n');
	return (0);
}
