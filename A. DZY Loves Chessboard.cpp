#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n,m;
 cin>>n>>m;
 char mm[100][100];
for(int i=0;i<n;i++)
{

    for(int j=0;j<m;j++)
    {
        cin>>mm[i][j];
        if(mm[i][j]=='.'){
            if((j+i)%2==0)mm[i][j]='B';
                else mm[i][j]='W';
        }

    }
}
for(int i=0;i<n;i++)
{

    for(int j=0;j<m;j++)
    {
        cout<<mm[i][j];


    }
    cout<<"\n";
}


}
