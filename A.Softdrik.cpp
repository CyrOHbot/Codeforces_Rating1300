//By CyrilHancock, contest: Codeforces Round #107 (Div. 2), problem: (A) Soft Drinking, Happy New Year!,
#include <iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k * l / nl, c * d), p / np) / n << endl;
   }
