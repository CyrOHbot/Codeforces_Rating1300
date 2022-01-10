//By CyrilHancock, contest: Codeforces Round #167 (Div. 2), problem: (A) Dima and Friends, Happy New Year!
#include <cstdio>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int no;
    int kl=0;
    int o;
    int total=0,answer=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>no;
        total+=no;
    }
    for (int i = 1; i <= 5; ++i)
    {   
        if((total+i)%(n+1)!=1)
        {
            answer+=1;
        }
        /* code */
    }
cout<<answer;
}
