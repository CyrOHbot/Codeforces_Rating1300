//By CyrilHancock, contest: Codeforces Round #173 (Div. 2), problem: (A) Bit++, Happy New Year!,
#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
int n;
int no;
vector<int> v;
cin>>n;
string s;
int sum=0,count=0;
for (int i = 0; i < n; i++)
{
cin>>s;
if(s[0]=='+'&&s[1]=='+'&&s[2]=='X')
{
 count++;   
}
if(s[0]=='X'&&s[1]=='+'&&s[2]=='+')
{
 count++;   
}
if(s[0]=='-'&&s[1]=='-'&&s[2]=='X')
{
 count--;   
}
if(s[0]=='X'&&s[1]=='-'&&s[2]=='-')
{
 count--;   
}
}
cout<<count;


   }
