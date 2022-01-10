//By CyrilHancock, contest: Codeforces Round #112 (Div. 2), problem: (A) Supercentral Point, Happy New Year!
#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    bool count1=false;
    bool count2=false;
    bool count3=false;
    bool count4=false;
    int c=0;
  
  int n;
 
int pos;
cin>>n;
int x[n],y[n];
for (int i = 0; i <n; i++)
{
    cin>>x[i];
    cin>>y[i];
}
for (int i = 0; i <n; i++)
{   
    count1=false;
    count2=false;
    count3=false;
    count4=false;
    
    for (int j = 0; j <n ; j++)
    {
        
        if(x[j]>x[i]&&y[j]==y[i])
        {
            count1=true;
        }
         if(x[j]<x[i]&&y[j]==y[i])
        {
            count2=true;
        }
         if(x[j]==x[i]&&y[j]<y[i])
        {
            count3=true;
        }
         if(x[j]==x[i]&&y[j]>y[i])
        {
            count4=true;
        }
  
    }
if(count1&&count2&&count3&&count4)
{
    c++;
}
      
}
cout<<c;
}
    
