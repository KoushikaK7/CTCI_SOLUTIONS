/*
Author: Koushika Kesavan
Time Complexity: O(nlog(n))
All rights reserved
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;
int main()
{
string str1,str2;
int s1,s2;
getline(cin,str1);
getline(cin,str2);
s1=sizeof(str1);
s2=sizeof(str2);
sort(str1,str1+s1);
sort(str2,str2+s2);
if(strcmp(str1,str2)==0)
	cout<<"The two words are anagrams";
else
	cout<<"The two words are not anagrams"<<"\n"<<str1<<"\n"<<str2;
return 0;
}
