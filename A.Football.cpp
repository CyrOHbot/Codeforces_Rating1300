#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int count=0;
	bool one=true,zero=true;
	cin>>s;
	for (int i = 1; i < s.length(); ++i)
	{
		if(s[i]==s[i-1])
		{
			count++;
			if(count==7)
			{
				cout<<"YES";
				return 0;
			}
		}
		else
		{
			count=0;
		}
	}
	cout<<"NO";
	return 0;
}