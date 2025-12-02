#include<stdio.h>
int factorial(int n)
{
	if (n==0)
	return 1;
	else
	return n * factorial(n - 1);
}
int main()
{
	int X;
	scanf("%d",&X);
	printf("Factorial %d and %d\n", X, factorial(X));
	return 0;
}
