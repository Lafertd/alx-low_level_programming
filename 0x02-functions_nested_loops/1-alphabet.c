#include "main.h"


	/**
	 * print_alphabet - print all alphabet in lowercase
	 *
	 * Description: print all lowercases alphabet
	 *
	 * Return: return 0 (Solved)
	 */


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}
