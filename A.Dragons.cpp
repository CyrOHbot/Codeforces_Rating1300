#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,dragon;
	int strength;
	int istrength;
	int strength_gain;
	vector <pair <int, int >> v;
	cin>>istrength>>n;
	strength=istrength;
	for (int i = 0; i < n; ++i)
	{
		cin>>dragon>>strength_gain;
		  v.push_back(make_pair(dragon, strength_gain));
}
sort(v.begin(), v.end());

		for (int i = 0; i < n; ++i)
		{

		if(istrength<=v[i].first)
		{
						cout<<"NO";
			return 0;
		}
		else
		{
			
			istrength+=v[i].second;

		}
	}

	cout<<"YES";
	return 0;
}