#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
{
int i,j,t,count,n=0;
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
 for(j=i-1;j>=0;j--)
 {
   if(a[i]==a[j])
   {
    n++;
    for(t=i;t<=count;t++)
    {
     a[t]=a[t+1];
    }
    j=i;
    count=count-1;
    puts(a);
   }
  }
}
}
if(n==0)
{
cout<<"\nContains no duplicates"<<"\n";
}
else if(n==count-1)
{
cout<<"\nContains duplicates"<<"\n";
}
puts(a);
getch();
}
