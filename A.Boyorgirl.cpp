//By CyrilHancock, contest: Codeforces Round #146 (Div. 2), problem: (A) Boy or Girl, Happy New Year!
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
	int n,count=0;
	set<char> ss;
	set<char>::iterator it;
	string s;
	cin>>s;
	for (int i = 0; i < s.length(); i++)
	{
		
			ss.insert(s[i]);
	}
	    

	    int h=ss.size();
	    
	    if(h%2==0)
	    {
	    	cout<<"CHAT WITH HER!";
	    }
	    else
	    {
	    	cout<<"IGNORE HIM!";
	    }
	
}
