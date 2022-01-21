#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main()
{
    fastread();
    int n;
    int a[1000];
    cin>>n;
    bool value=true;
    for (int i = 0; i <n; i++)
    {
        /* code */
        cin>>a[i];
      
    }
    sort(a, a + n);
     int continuous(1), max_continuous(1);
    for (int i = 1; i < n; ++i)
    {
        if (a[i] == a[i-1])
        {
            continuous += 1;
            if (continuous > max_continuous)
            {
                max_continuous = continuous;
            }
        }
        else
        {
            continuous = 1;
        }
    }
    cout << (max_continuous <= (n + 1) / 2 ? "YES" : "NO") << endl;
}