#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
	int s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	
	set<int> val = {s1,s2,s3,s4};
	cout<<4-val.size();
}

