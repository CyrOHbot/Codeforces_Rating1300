//By CyrilHancock, contest: Codeforces Beta Round #69 (Div. 2 Only), problem: (A) Panoramix's Prediction, Happy New Year!,
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	vector<int> v{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
 vector<int>::iterator upper1, upper2;
 cin>>n>>m;
	 upper1 = upper_bound(v.begin(), v.end(), n);
	 if(*upper1==m)
	 {
	 	cout<<"YES"<<" ";
	 }
	 else
	 	cout<<"NO"<<" ";
}
