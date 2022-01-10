//By CyrilHancock, contest: Codeforces Beta Round #55 (Div. 2), problem: (A) Word, Happy New Year!
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int upper=0,lower=0;
	cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
    	if (s[i]>='A' && s[i]<='Z')
    		{
    			upper++;
    		}
    	if (s[i]>='a' && s[i]<='z')
    		{
    			lower++;
    		}

    }
if(upper>lower)
{
	for (int j = 0; j < s.length();j++)
	{
		s[j]=toupper(s[j]);
	}
}
 
 if(upper<lower||lower==upper)
{
	for (int k = 0; k < s.length(); k++)
	{
		s[k]=tolower(s[k]);
	}
}   

cout<<s;
}
