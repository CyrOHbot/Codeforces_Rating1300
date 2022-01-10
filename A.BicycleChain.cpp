//By CyrilHancock, contest: Codeforces Round #132 (Div. 2), problem: (A) Bicycle Chain,            
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
        cin>>n;
        int a[100],b;
        int count=1;
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        }
        cin>>m;
        
        int max=0;  
        for (int i = 0; i < m; ++i)
        {  cin>>b;
           for (int j = 0; j < n; ++j)
            {
             if(b%a[j]==0){   

                  int x = b / a[j];
            if(x>max)
            {
                max=x;
                count=1;
            }
            else if(x==max)
            {
                count+=1;
            }
            break;
            }
        }
    
        
    }
    cout<<count;
}            
 
