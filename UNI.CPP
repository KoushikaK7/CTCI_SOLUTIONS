/*
Author:Koushika Kesavan
Date of Creation:30 November 2018
Title:To determine string has unique characters without additional data structure
TYPE 1:Reduction of space using a bit vector(Aimed to reduce storage size)
Assumption:String contains characters from `a`-`z`
All rights reserved
*/
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int IsUniqueStr(char *str)
{
int i,checker=0,value;
for(i=0;i<strlen(str);i++)
{
value=str[i]-'a';
if((checker & (1<<value)) > 0)
return 0;
else
checker|=(1<<value);
}
return 1;
}
void main()
{
int n;
char *str;
gets(str);
n=IsUniqueStr(str);
if(n!=0)
cout<<"The string has unique characters";
else
cout<<"The string has duplicate characters";
getch();
}