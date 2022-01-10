//By CyrilHancock, contest: Codeforces Beta Round #34 (Div. 2), problem: (B) Sale, Happy New Year!
#include <bits/stdc++.h>

using namespace std;




int main()
{
int n,m;
int profit=0;
int count=1;
cin>>n>>m;
int a[n];
for (int i = 0; i < n; ++i)
{
    cin>>a[i];
   
}
sort(a,a+n);
for (int i = 0; i < m; ++i)
{
    if(a[i]>=0)
    {
        break;
    }
    profit+=a[i];
}
cout<<-profit;
}
