#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main()
{
      string a, b;
	cin>>a>>b;
	bool check =true; 
	long long diff=0;
	long long sza=a.size();
	long long szb=b.size();
	if(sza!=szb){
		puts("NO");
		return 0;
	}else{
		vector<long long> index;
		for(int i=0; i< sza; i++){
			if(a[i]!=b[i]){
				diff++;
				index.emplace_back(i);
			}
		}
		if(diff==2){
			if(a[index[0]]!=b[index[1]] || a[index[1]]!=b[index[0]]){
				check=false;
			}
			
			
		}else{
			check=false;
		}
		
	}
	if(check)
		puts("YES");
	else
		puts("NO");
	
}