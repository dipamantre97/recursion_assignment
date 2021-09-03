#include<stdio.h>

int fact(int num)
{
	long f=1;
	if(num==0)
	return 1;
	return(num*fact(num-1));
}
int main()
{
	int n;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("factorial of no %d=%d",n,fact(n));
}
