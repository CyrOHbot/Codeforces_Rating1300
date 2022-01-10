//By CyrilHancock, contest: Codeforces Round #152 (Div. 2), problem: (A) Cupboards, Happy New Year!,
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
int n,l,r;
cin>>n;
std::vector<int> vl;
std::vector<int> vr;
for (int i = 0; i < n; i++)
{
	cin>>l>>r;
	vl.push_back(l);
	vr.push_back(r);
}

int countofzerol,countofzeror,countofonel,countofoner;
countofzerol=count(vl.begin(), vl.end(), 0);
countofzeror=count(vr.begin(), vr.end(), 0);
countofonel=count(vl.begin(), vl.end(), 1);
countofoner=count(vr.begin(), vr.end(), 1);

cout<<"\n";
int minofl=min(countofonel,countofzerol);
int minofr=min(countofoner,countofzeror);

cout<<minofr+minofl;
}
