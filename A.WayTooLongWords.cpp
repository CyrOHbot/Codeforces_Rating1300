//By CyrilHancock, contest: Codeforces Beta Round #65 (Div. 2), problem: (A) Way Too Long Words, Happy New Year!,
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	
	for (int i = 0; i < n; i++)
	
	{
		cin>>s;
		if(s.length()<=10)
		{
			cout<<s<<"\n";
		}
		else
		{
			cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
		}
	}
}
