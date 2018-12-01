/*
Author: Koushika Kesavan
Date of Creation: 2 December 2018
Time Complexity: O(n^2)
Checked for Testcases:
1.Does not contain any duplicates.
2.Contains all duplicates.
3.Null String
4.Continuous duplicates.
5.Non Continuous duplicates.
All rights reserved
*/
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
{
int i,j,t,count,n=0,end=1;
char a[200];
cout<<"\nEnter a string:";
gets(a);
count=strlen(a);
if(count==0)
{
cout<<"Null String";
}
else
{
for(i=1;i<count;i++)
{
 for(j=0;j<end;j++)
 {
   if(a[i]==a[j])
   {
    n++;
    break;
   }
 }
   if(j==end)
   {
    a[end]=a[i];
    end++;
   }
  }
 a[end]=0;
}
if(n==0)
{
cout<<"\nContains no duplicates"<<"\n";
}
else if(n==count-1)
{
cout<<"\nContains all duplicates"<<"\n";
}
puts(a);
getch();
}
