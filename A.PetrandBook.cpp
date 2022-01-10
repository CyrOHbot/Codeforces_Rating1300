//By CyrilHancock, contest: Codeforces Beta Round #99 (Div. 2), problem: (A) Petr and Book, Happy New Year!,
#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    
int pages;
int time;
int n[7];
int sum=0;
cin>>pages;
for (int i = 0; i < 7; ++i)
{
    cin>>n[i];
}
int i=0;
 while(true){
    pages-=n[i];
    if(0>=pages)
    {   time=i+1;
        break;
    }
     i = (i + 1)%7;
}
cout<<time;
}
    
