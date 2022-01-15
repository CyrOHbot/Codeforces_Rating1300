#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

using namespace std;


int main()
{
int t,sx,sy,ex,ey;
cin>>t>>sx>>sy>>ex>>ey;
char a[t];   
for (int i = 0; i < t; i++)
{
    /* code */
    cin>>a[i];
    if(sx<ex)
    {
    if(a[i]=='E')
    {
        sx+=1;
    }
    }
    if(sy>ey)
    {
    if(a[i]=='S')
    {
        sy-=1;
    }
    }
    if(sx>ex)
    {
    if(a[i]=='W')
    {
        sx-=1;
    }
    }
    if(sy<ey)
    {
    if(a[i]=='N')
    {
        sy+=1;
    }
    }
   

    if(sx==ex&&sy==ey)
    {
     
        cout<<i+1;
        return 0;
    }
}

cout<<-1;
}
