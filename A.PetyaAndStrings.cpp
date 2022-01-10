//By CyrilHancock, contest: Codeforces Beta Round #85 (Div. 2 Only), problem: (A) Petya and Strings, Happy New Year!,
#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);           
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);           
             
             if(s1==s2){
           cout<<"0"; 
            }
    for (int i = 0; i < s1.length(); ++i)
    {
        if(s1[i]>s2[i]){
            cout<<"1";
            break;
}
        if(s1[i]<s2[i])
 {           cout<<"-1";
            break;
  }     
    
    }


   }
