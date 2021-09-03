#include <stdio.h>
#include <string.h>
void reverse(char *str, int x, int y)
 {
  char temp;
  if (x >= y)
    return;
  temp=str[x];
  str[x]=str[y];
  str[y]=temp;
  
  reverse(str, ++x, --y);
}
int main() {
  char str[100];
  printf("Enter the string : ");
  gets(str);
  reverse(str, 0, strlen(str) - 1);
  printf("Reversed string -> %s", str);
  return 0;
}
