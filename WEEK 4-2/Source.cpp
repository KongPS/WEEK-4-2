#include <stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	int c = x;
	int a = x;
	while (x != 0)
	{
		while (c != 0)
		{
			printf("*");
			c--;
		}
		printf("\n");
		c = a;
		x--;
	}
}
