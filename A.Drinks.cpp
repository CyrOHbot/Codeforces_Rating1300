//By CyrilHancock, contest: Codeforces Round #126 (Div. 2), problem: (B) Drinks, Happy New Year!
#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
  int n ,x;
  int max=0,min=1000,maxindex=0,minindex=0;
  cin>>n;
  int sum=0;
  for (int i = 0; i < n; i++)
  {
  	cin>>x;
  	sum+=x;
  	}
float t=(float)sum/n;
  printf("%.12f",t);
}
