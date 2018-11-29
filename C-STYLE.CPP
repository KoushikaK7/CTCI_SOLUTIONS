#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int i,count,temp;
char a[200];
gets(a);
count=strlen(a);
for(i=0;i<count/2;i++)
{
temp=a[i];
a[i]=a[count-i-1];
a[count-i-1]=temp;
}
puts(a);
getch();
}