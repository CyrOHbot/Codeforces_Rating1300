#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    map<char,int> mp;
     bool f1=true;
    for (long long  i = 0; i < s1.length(); i++)
    {
        /* code */
        mp[s1[i]]++;
    }
  for(long long i=0;i<s2.length();i++)
        {
            if(mp[s2[i]]>0 || s2[i]==' ')
            {
                mp[s2[i]]--;
                continue;
            }

            else
            {
                f1=false;
                break;
            }
        }

        if(f1==true)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;
    
}