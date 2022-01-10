//By CyrilHancock, contest: Codeforces Round #101 (Div. 2), problem: (A) Amusing Joke, Happy New Year!,
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string a, b, c, s;
    cin >> a >> b >> c;

    s = a + b;

    sort(s.begin(), s.end());
    sort(c.begin(), c.end());

    if(s == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
