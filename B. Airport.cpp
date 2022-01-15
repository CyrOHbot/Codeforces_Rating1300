#include<bits/stdc++.h>

using namespace std;

int main()
{

	int n,m,k,profit_max=0,profit_min=0;
	cin>>n>>m;
	multiset<int> mini;
	multiset<int ,greater <int>> maxi;
	for (int i = 0; i < m; ++i)
	{
		cin>>k;
		mini.insert(k);
		maxi.insert(k);
	}
	for(int i=0;i<n;i++)
    {
        int x=*mini.begin();
        profit_min+=x;
        mini.erase(mini.begin());
        x--;
        if(x>0)
        mini.insert(x);


    }
    for(int i=0;i<n;i++)
    {
        int x=*maxi.begin();
        profit_max+=x;
        maxi.erase(maxi.begin());
        x--;
        if(x>0)
        maxi.insert(x);


    }
    cout<<profit_max<<" "<<profit_min;
}
