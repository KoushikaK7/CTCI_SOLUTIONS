#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char *str;
int i, end,n;
gets(str);
end=strlen(str);
n=end;
for(i=0;i<n/2;i++)
{
str[i]+=str[end-1];
str[end-1]=str[i]-str[end-1];
str[i]-=str[end-1];
end--;
}
puts(str);
getch();
}
