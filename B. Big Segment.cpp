#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
int n,l,r,minl,maxr,number(1);
cin>>n>>minl>>maxr;

for ( int i = 2; i <=n; i++)
{
    /* code */
    cin>>l>>r;
    if(l<=minl&&r>=maxr)
    {
        number=i;
    }
    else if(l<minl || r>maxr)
    {
        number=-1;
    }
    minl=min(minl,l);
    maxr=max(maxr,r);
    
}
cout<<number;



}