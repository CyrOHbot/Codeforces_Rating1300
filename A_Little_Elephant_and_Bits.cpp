#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main()
{
    fastread();
    string s;
    cin >> s;
    int c = s.find('0');
    if (c == -1)
        cout << s.substr(1) << endl;
    else
        cout << s.substr(0, c) << s.substr(c + 1) << endl;
    return 0;
}
