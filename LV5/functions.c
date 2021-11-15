#include <stdio.h>

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n>0)
	{
		return factorial(n-1) * n;
	}
}

int fibonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	int n = 5;
	printf("n = %d, Factorial = %d, fibonacci = %d", n, factorial(n), fibonacci(n) );
	return 0;
}
