//By CyrilHancock, contest: Codeforces Beta Round #57 (Div. 2), problem: (A) Ultra-Fast Mathematician, Happy New Year!,
#include<bits/stdc++.h>

using namespace std;

int main()
{
string s1,s2,s3;
cin>>s1>>s2;
for (int i = 0; i < s1.length();i++)
{
if(s1[i]=='0'&&s2[i]=='0')
{
s3+='0';
}
if(s1[i]=='1'&&s2[i]=='1')
{
s3+='0';	
}
if(s1[i]=='1'&&s2[i]=='0')
{
s3+='1';	
}
if(s1[i]=='0'&&s2[i]=='1')
{
s3+='1';	
}
}
cout<<s3;
}
