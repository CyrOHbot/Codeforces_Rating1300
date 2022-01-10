//By CyrilHancock, contest: Codeforces Round #143 (Div. 2), problem: (A) Team, Happy New Year!,
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
int sum=0,count=0;
for (int i = 0; i < n; i++)
{
    sum=0;
    for(int j=0;j<3;j++)
    {
    cin>>no;
    sum+=no;
    
    
}
if(sum>=2)
    {
        count++;
    }
}
cout<<count;


   }
