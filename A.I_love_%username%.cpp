//By CyrilHancock, contest: Codeforces Round #109 (Div. 2), problem: (A) I_love_\%username\%, Happy New Year!,	
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
int n,l,r,points	;
int count=0;
cin>>n>>l;

int min(l), max(l), amazing(0);
while(--n)
{
	
	cin>>l;
		if(l>max)
	{
		max=l;
		++count;
	}
	if(l<min)
	{
		min=l;
		++count;
	}
}


cout<<count;

}
