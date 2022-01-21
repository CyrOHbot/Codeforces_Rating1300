#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
 
int main()
{
    fastread();
    int y,k,n;
    bool flag=true;
    cin>>y>>k>>n;
    for (int i = 0; i <=n; i+=k)
    {
        /* code */
        if(i>y)
        {
        if(i%k==0)
        {
            cout<<i-y<<" ";
            flag=false;
        }
        }
    }
        if(flag)
        {
        cout<<"-1";
        }
}