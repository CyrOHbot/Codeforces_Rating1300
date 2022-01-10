//By CyrilHancock, contest: Codeforces Beta Round #40 (Div. 2), problem: (A) Translation, Happy New Year!,        
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
  string s1,s2;
  cin>>s1>>s2;
  bool t=true;
  int count=0;
  int len=s1.length();
  
  for (int i = 0; i <len; ++i)
  {
      if(s1[i]==s2[len-i-1])
       count++;
  }
  if(count==len)
    cout<<"YES";
else
    cout<<"NO";

}
