//By CyrilHancock, contest: Codeforces Beta Round #84 (Div. 2 Only), problem: (A) Nearly Lucky Number, Happy New Year!
#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	int count1=0;
	cin>>n;
	int a;
	while(n!=0)
	{
		 a=n%10;
		
		if(a==7 || a==4)
		{
			count1++;
		
		}
		n/=10;
	}
	
if(count1==7 || count1==4)
{
	cout<<"YES";
}
else
{
	cout<<"NO";
}

   }
