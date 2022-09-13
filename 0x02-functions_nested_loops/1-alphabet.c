#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * Description: 'Prints the alphabet with _putchar'
 * Return: Always 0 (Success)
 */

void print_alphabet(void);
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
