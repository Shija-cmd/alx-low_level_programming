#include <stdio.h>
/**
  * main - print numbers without using char, printf or puts but putcharx2
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}
