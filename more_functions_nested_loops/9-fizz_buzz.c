#include "main.h"
#include <stdio.h>
/**
* main - Print 0 to 100
* Return: Always 0.
*/
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		i++;
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
