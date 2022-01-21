#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
 
int main()
{
    fastread();
    string s;
    int n;
    cin>>n;
    cin>>s;
    string l = s.substr(0, n);
    string r = s.substr(n, s.length());
    bool strictly_less(true), strictly_more(true);
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    for (size_t i = 0; i < n; ++i)
    {
        if (l[i] >= r[i])
        {
            strictly_less = false;
            break;
        }
    }
    for (size_t i = 0; i < n; ++i)
    {
        if (l[i] <= r[i])
        {
            strictly_more = false;
            break;
        }
    }
            cout << ((strictly_less || strictly_more) ? "YES" : "NO") << endl;
    
}