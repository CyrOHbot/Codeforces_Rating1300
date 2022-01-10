//By CyrilHancock, contest: Codeforces Round #166 (Div. 2), problem: (A) Beautiful Year, Happy New Year!,
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
int y;
cin>>y;
int digit;
int ten;
int hundred;
int thousand;
while(true)
{
	y+=1;
	digit=y%10;
	ten=(y%100)/10;
	hundred=(y%1000)/100;
	thousand=(y%10000)/1000;
	
if (thousand != hundred && thousand != ten && thousand != digit &&  hundred != ten &&  hundred != digit && ten != digit)
{
	break;
}

}
cout<<y;
}
