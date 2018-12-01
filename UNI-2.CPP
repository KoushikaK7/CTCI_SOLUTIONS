/*
Author: Koushika Kesavan
Date of Creation: 2 December 2018
Time Complexity: O(n)
Version: 2(Uses Additional Data structure which is the bool data type)
This code is made to work in TurboC++, and the bool function does not work, so modified the int data type to work like the bool data type
All rights reserved
*/

#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define true 1
#define false 0
typedef int boolean;//Pseudo bool data type
const int max=256;//Represents the total ASCII values
boolean IsUniqueStr(char *str)
{
int i;
if(strlen(str)>256)//If it exceeds the ASCII Character limit then it means that a character is duplicated
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
