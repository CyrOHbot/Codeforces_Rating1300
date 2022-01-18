#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main()
{
    fastread();
    int n, k, a, last(0), continuous(1);
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a);
        if (a == last)
        {
            continuous += 1;
        }
        else
        {
            continuous = 1;
        }
        last = a;
    }
    printf("%d\n", continuous + k > n ? n - continuous: -1);
    return 0;
}

    /*
    #include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main()
{
    fastread();
    int n,k;
    cin>>n>>k;
    vector<int> a;
    int o;
    for (int  i = 0; i < n; i++)
    {
               cin>>o;
        a.push_back(o);
    }
    
    
    if(n==1){
		cout<<0<<endl;
		return 0;
	}
    if ( std::equal(a.begin() + 1, a.end(), a.begin()) )
{
    cout<<0;
    return 0;
}
    for (size_t i = 0; i < n; i++)
    {

        
        int current=a.at(k-1);
        a.push_back(current);
    a.erase(a.begin());
   
   if ( std::equal(a.begin() + 1, a.end(), a.begin()) )
{
    cout<<i+1;
    return 0;
}
if(i==n-1)
{
     cout<<-1;  
     return 0;
}
    }
 

}

*/    

