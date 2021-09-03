#include <stdio.h>
#include <string.h>
 
    char check_Capital(char str2[])
    {
        static int i = 0;
        if (i < strlen(str2))
        {
            if (isupper(str2[i]))
            {
                return str2[i];
            }
            else
            {
                i = i + 1;
                return check_Capital(str2);
            }
        }
        else
		 return 0;
    }
 
 
int main()
{
    char str1[20], s;
	printf(" Enter string str1 : ");
    scanf("%s", str1);
    s = check_Capital(str1);
    if (s== 0)
    {
        printf("  no capital letter in the string :  %s.\n", str1);
    }
    else
    {
        printf(" The first capital letter  in the string %s is %c.\n\n", str1, s);  
    }
        return 0;
    }

