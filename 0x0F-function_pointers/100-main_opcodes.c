#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: the number of parameters
 * @argv: the parameters in the case the nember of bytes
 * Description: this function prints opcodes in hexa
 * Return; 0 in succes
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(1);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

