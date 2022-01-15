#include<bits/stdc++.h>

using namespace std;

int main()
{

int noofstudents,noofpuzzles;
cin>>noofstudents>>noofpuzzles;
int puzzles[noofpuzzles];
int mini=1000000;
for (int i = 0; i < noofpuzzles; ++i)
{
	cin>>puzzles[i];
}
sort(puzzles,puzzles+noofpuzzles);
int least=puzzles[noofpuzzles-1]-puzzles[0];
	for(int i=1;i<=noofpuzzles-noofstudents;++i){
		if(puzzles[i+noofstudents-1]-puzzles[i]<least)
			least=puzzles[i+noofstudents-1]-puzzles[i];
	}
	cout<<mini;


}