#include<stdio.h>

int bin(int num)
{
if(num==0)
return 0;
else
return (num%2+10*bin(num/2));	
	
}
int main()
{
	int n,d,i;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("bin value of %d =%d",n,bin(n));

}
