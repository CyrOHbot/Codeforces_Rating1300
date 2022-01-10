//By CyrilHancock, contest: Codeforces Round #189 (Div. 2), problem: (A) Magic Numbers, Happy New Year!        
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
  string n;
  cin>>n;
  bool t=true;
  for (int i = 0; i <n.length(); ++i)
  {
      if(n[i]!='1'&&n[i]!='4')
        t=false;
  }

  if(n[0]=='4')
    t=false;

if(n.find("444")!=n.npos)
    t=false;

if(t==true)
{
    cout<<"YES";

}
else
cout<<"NO";

}
