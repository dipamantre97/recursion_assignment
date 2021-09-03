#include<stdio.h>

int fib(int num)
{
if(num==0)
return 0;
else if(num==1)
return 1;
else
return(fib(num-2)+fib(num-1));	

}
int main()
{
	int n,d,i;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("fibonacci series=");
	for(i=0;i<n;i++)
	{
	
    d=fib(i);
	printf("%d\t",d);
}

}
