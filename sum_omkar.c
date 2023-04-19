#include <stdio.h>

int sum(int a, int b)
{
	return a+b;
}

int main()
{
	int a =10, b=5;
	printf("Sum of %d and %d : %d\n", a,b,sum(a,b));
	return 0;
}

