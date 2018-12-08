#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
int len,i,j;
char str[50];
gets(str);
len=strlen(str);
for(i=0;i<len;i++)
if(str[i]==' ')
{
for(j=len;j>=i;j--)
{
str[j+2]=str[j];
cout<<"\n"<<str;
}
len+=2;
str[i]='%';
str[i+1]='2';
str[i+2]='0';
}
cout<<"\n";
puts(str);
getch();
}
