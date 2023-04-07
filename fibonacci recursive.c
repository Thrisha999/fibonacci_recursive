#include<stdio.h>
void main()
{
	int fibonacci(int n);
	int n,c;
	printf("enter the number:\n");
	scanf("%d",&n);
	c=fibonacci(n-1);
	printf("%d",c);
	printf("nth term of fibonacci series is %d",c);
}
int fibonacci(int n)
{
	if(n==0)
	return n;
	else if(n==1)
	return 1;
	else 
	return fibonacci(n-1)+fibonacci(n-2);
}
