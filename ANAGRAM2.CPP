#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
#include<stdlib.h>
char str1[30],str2[30];
void sort(char* str1)
{
int i,j;
char temp;
for(i=0;i<strlen(str1);i++)
for(j=0;j<strlen(str1)-i;j++)
{
if(str1[j]>str1[j+1])
{
temp=str1[j];
str1[j]=str1[j+1];
str1[j+1]=temp;
}
}
}
void main()
{
gets(str1);
gets(str2);
sort(str1);
sort(str2);
cout<<"\n"<<str1<<" "<<str2;
if(strcmp(str1,str2)==0)
cout<<"\nThe words are anagrams";
else
cout<<"\nThe words are not anagrams";
getch();
}
