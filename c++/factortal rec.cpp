#include<stdio.h>
int fact(int n)
{
	if(n == 1)
	return 1;
else 
	return n*fact(n-1);
	
}

	int main()
	{
		int n;
		printf("enter the number:");
		scanf("%d", &n);
		printf("factorial of a number %d is %d",n, fact(n));	
	}

