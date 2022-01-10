//By CyrilHancock, contest: Codeforces Round #106 (Div. 2), problem: (A) Business trip, Happy New Year!,            
    #include<bits/stdc++.h>
    #define ll              long long
    #define ull             unsigned long long
    #define pb              push_back
    #define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
    using namespace std;
    int main()
    {
     
        fastread();
        int k;
        int a[20];
        cin>>k;
        int total=0;
        for (int i = 0; i <12; ++i)
        {
            cin>>a[i];
            total+=a[i];
      }
      if(total<k)
      {
        cout<<"-1";
      }
      else{
        sort(a, a + 12, greater<int>());
        int sum=0;
        int count=0;
            while(sum<k)
            {
               sum=sum+a[count];
               count+=1;
            }
        
        cout<<count;
       }
}
