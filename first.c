#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int k = 1;
	int Sum = 1;
	int n = get_int("n: ");
	if (n > 1)
	{
		while (Sum < n)
		{
			k++;
			Sum += k;
		}
		printf("k: %i\n", k);
	}
	else
		{
			printf("n must be greater than 1\n")
		}
}