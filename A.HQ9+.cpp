//	By CyrilHancock, contest: Codeforces Beta Round #96 (Div. 2), problem: (A) HQ9+, Happy New Year
#include <iostream>

using namespace std;

int main()
{
    string s;
    int count=0;
    cin>>s;
    for (int i = 0; i < s.length();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            count=1;
        }
    }
if(count==0)
{
    cout<<"NO";

}
else 
{
    cout<<"YES";
}

   }
