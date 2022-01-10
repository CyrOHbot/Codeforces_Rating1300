//By CyrilHancock, contest: Codeforces Round #129 (Div. 2), problem: (A) Little Elephant and Rozdil, Happy New Year!,    
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
       
    long long n, k, o, e,time,min=1000000001,minindex=0;
    int count=1;
    cin >> n;
   for (int i = 1; i <= n; ++i)
   {
       cin>>time;
       if(time<min)
       {
        min=time;
        minindex=i;
        count=1;
       }
       else if(time==min)
       {
        count+=1;
       }
   }
   if(count==1)
   {
    cout<<minindex;
   }
   else
   {
    cout<<"Still Rozdil\n";
   }

}
