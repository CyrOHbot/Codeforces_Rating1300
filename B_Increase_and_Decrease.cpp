#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
 
int main()
{
    fastread();
    int n;
    cin>>n;
    int no;
    int pass=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>no;
        pass+=no;
    }
    if(pass%n==0)
    {
        cout<<n;
        
    }
    else
    {
        cout<<n-1;
        
    }
    

    


}