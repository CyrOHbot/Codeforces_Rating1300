#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main()
{
    fastread();
int  n,k;
	cin>>n>>k;
	long long arr[n+8]={0};
  // input + cumlative sum 
	for(int  i=0;i<n;i++){
		cin>>arr[i];
		if(i){
			arr[i]=arr[i-1]+arr[i];
		}
	}
	
 
	int min=150000010;
	   long long  minindex=0;
	for(int i=0;i<=n-k;i++){
		 	long long sum=0;
		if(!i){
			sum=arr[i+k-1];
 			if(sum<=min){
				min=sum;
				minindex=i;
			}
			
		}
		else {
			sum=arr[i+k-1]-arr[i-1];
 
			if(sum<=min){
				min=sum;
				minindex=i;
			}
		}
		
	
	}
	cout<<++minindex<<endl; 
	return 0;
}
