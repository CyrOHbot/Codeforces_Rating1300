//By CyrilHancock, contest: Codeforces Round #188 (Div. 2), problem: (A) Even Odds, Happy New Year
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
       
    long long n, k, o, e;
    cin >> n >> k;
    o = (n + 1) / 2, e = n / 2;
    if (k <= o) {
        cout << k * 2 - 1 << '\n';
    } else {
        cout << (k - o) * 2 << '\n';
    }

}
