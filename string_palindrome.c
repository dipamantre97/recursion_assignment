#include<stdio.h>
#include<string.h>

int ispalin(char str[],int x,int y)
{
	      if(x>=y)
			return 1;
			if(str[x]!=str[y])
			return 0;
		  return( ispalin(str,x+1,y-1));
		
}
int main()
{
	char s[20];
	int i,j,p;
	i=0,j=strlen(s)-1;
	printf("enter string\n");
	scanf("%s",s);
	if(ispalin(s,i,j))
	
		printf("palindrome");
	else
		printf("not palindrome");
}
