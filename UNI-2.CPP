#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define true 1
#define false 0
typedef int boolean;
const int max=256;
boolean IsUniqueStr(char *str)
{
int i;
if(strlen(str)>256)
return false;
boolean chars[max]={0};
for(i=0;i<strlen(str);i++)
{
if(chars[int(str[i])])
return false;
else
chars[int(str[i])]=true;
}
return true;
}
void main()
{
char *str;
cout<<"\nEnter String:";
gets(str);
if(IsUniqueStr(str))
{
cout<<"\nThe string has unique characters";
}
else
{
cout<<"\nThe string has duplicate characters";
}
getch();
}
