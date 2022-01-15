#include<bits/stdc++.h>

using namespace std;

int main()
{
string s;
cin>>s;
string b="hello";
int j=0,pass=0;
for (int i = 0; i < s.size(); ++i)
{
	if(s[i]==b[j])
{		j++;
		pass++;

		if (pass == 5) {
                break;
            }
}
}
if(pass==5)
{
	cout<<"YES";
}
else
{
	cout<<"NO";
}

}
