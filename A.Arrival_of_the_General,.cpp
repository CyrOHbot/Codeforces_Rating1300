//By CyrilHancock, contest: Codeforces Round #103 (Div. 2), problem: (A) Arrival of the General, Happy New Year!,
#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
  int n ,x;
  int max=0,min=1000,maxindex=0,minindex=0;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
  	cin>>x;
  	if(x>max)
  	{
  		max=x;
  		maxindex=i;
  	}
  		if(x<=min)
  	{
  		min=x;
  		minindex=i;
  	}
  }
  if(maxindex>minindex)
  {


  cout<<(maxindex-1)+(n-minindex)-1;
}
else
{
		cout<<(maxindex-1)+(n-minindex);
}
}
