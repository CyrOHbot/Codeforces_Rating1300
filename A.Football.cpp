//By CyrilHancock, contest: Codeforces Beta Round #42 (Div. 2), problem: (A) Football, Happy New Year!,        
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{

    fastread();
int n;

map<string, int> m;
string s;
cin>>n;
for (int i = 0; i < n; ++i)
{
    cin>>s;
    auto itr=m.find(s);
    if(itr==m.end())
    {
        m.insert(pair<string, int>(s, 1));
        
    }
    else
    {
        itr->second+=1;
    }

}
auto itr = m.begin();

auto itr1 = m.begin();
itr1++;

if(itr->second>itr1->second)
{
    cout<<itr->first;
}
else
cout<<itr1->first;
}
