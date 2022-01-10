//By CyrilHancock, contest: Codeforces Round #131 (Div. 2), problem: (A) System of Equations, Happy New Year!            
    #include<bits/stdc++.h>
    #define ll              long long
    #define ull             unsigned long long
    #define pb              push_back
    #define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
    using namespace std;
    int main()
    {
     
        fastread();
        int n,m;
        int count=0;
        cin>>n>>m;
        for (int i = 0; i <1000; ++i)
        {
            for (int j = 0; j < 1000; ++j)
            {
                if((((i*i)+j)==n)and((i+(j*j))==m))
                    count++;

            }
        }
        cout<<count;
}
