#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
     long long n, d;
    cin>>n;
    long long a[n];
    for (int  i=0 ; i<n; i++)
    {
        /* code */
        cin>>a[i];
    }
    sort(a,a+n);
    long long  min=a[0];
    long long max=a[n-1];
     if(a[0] == a[n - 1])
        cout << a[n - 1]-a[0] << " " << (n - 1) * n / 2 << endl;
        else{
            long long  mini=0;
    long long maxa=0;
            for (int i=0;i<n;i++)
            {
                if(a[i]==min)
                {
                    mini++;
                }
                if(a[i]==max)
                {
                    maxa++;
                }
            }
            
    
    cout<<max-min<<" "<<mini*maxa;
        }   
}