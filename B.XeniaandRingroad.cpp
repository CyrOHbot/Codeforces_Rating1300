//By CyrilHancock, contest: Codeforces Round #197 (Div. 2), problem: (B) Xenia and Ringroad, Happy New Year!,        
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,m;
    long long int ans=0;
    cin>>n>>m;
    int loc=1;
  for(int i=0; i<m; i++)    {
    int now;
    cin>>now;

    if(now>=loc)
    {
        ans+=now-loc;
    }
    else
    {
        ans+=n-(loc-now);
        
    }
    loc=now;
    }
    cout<<ans;
}
