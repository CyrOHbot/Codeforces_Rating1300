//By CyrilHancock, contest: Codeforces Round #163 (Div. 2), problem: (A) Stones on the Table, Happy New Year!,
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int n,count1=0;;
	cin>>n>>s;
	for (int i = 0; i < n; ++i)
	{
		if(s[i]==s[i+1])
		{
			count1++;
		}
	}
	cout<<count1;
	

   }
