#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
 
int main()
{
    fastread();
    int n,m;
    cin>>n>>m;
    int no;
    vector<int> maxtime,giventime;
    int min1=10000000;
    int max1=0;
    for (int i = 0; i <n; i++)
    {
        /* code */
        cin>>no;
         if(max1<no){
	        max1=no;
	    }
	    if(min1>no){
	        min1=no;
	    }
    }
    int min2=100000000;
    for (int i = 0; i <m; i++)
    {
        /* code */
        cin>>no;
       if(min2>no){
	        min2=no;
	    }
 
    }

     
    int val=max(2*min1,max1);
if(val<min2){
        cout<<val;
    }    
    else
    {
        cout<<"-1";
    }
}