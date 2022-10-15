#include <stdio.h>
/**
  * main - print base 16 numbers
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
		i = 'a';

		while (i <= 'f')
		{
			putchar (i);
			i++;
		}
		putchar ('\n');
		return (0);
}
