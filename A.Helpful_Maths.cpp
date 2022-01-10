//By CyrilHancock, contest: Codeforces Round #197 (Div. 2), problem: (A) Helpful Maths, Happy New Year!, 
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
string str;
char ch;
std::vector<int> v;
int n;
cin>>str;
stringstream ss(str);
while(ss>>n)
{
v.push_back(n);
ss>>ch;	
}
sort(v.begin(), v.end());
for (vector<int>::iterator i = v.begin(); i < v.end(); i++)
{	
	vector<int>::iterator y=v.end()-1;
	if(y==i)
	{
		cout<<*i;
	}
	else{
	cout<<*i<<"+";
}
}
}
