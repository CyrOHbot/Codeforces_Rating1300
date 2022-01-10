//By CyrilHancock, contest: Codeforces Round #204 (Div. 2), problem: (A) Jeff and Digits, Happy New Year!,
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,no,countzero=0,countfive=0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>no;
        if(no==0)
        {
            countzero++;
        }
        if(no==5)
        {
            countfive++;
        }
    }
  if(countzero==0)
  {
    cout<<"-1";
  }
  else if(countfive<9)
  {
    cout<<"0";

  }
  else
  {
    int no_of_five=(countfive/9)*9;
    for (int i = 0; i < no_of_five; ++i)
    {
        cout<<"5";
    }
      for (int i = 0; i < countzero; ++i)
    {
        cout<<"0";
    }

  }
}
