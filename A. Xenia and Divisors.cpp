#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;


int main()
{
    int n;
    vector<int> one,two,four,six,three;
    int no;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>no;
        if(no==1)
        {
            one.push_back(no);
        }
        if(no==2)
        {
            two.push_back(no);
        }
        if(no==3)
        {
            three.push_back(no);
        }
        if(no==4)
        {
            four.push_back(no);
        }
        if(no==6)
        {
            six.push_back(no);
        }

    }
    int ans[5]={0};
    bool flag = true;
    for(int i=0; i<n/3; i++)
    {
                if(four.size() > 0 && two.size() > 0 && one.size() > 0)
                {
                    ans[0]++;
                    four.pop_back();
                    two.pop_back();
                    one.pop_back();
                        continue;
                }
                 if(six.size() > 0 && two.size() > 0 && one.size() > 0)
        {
            ans[1]++;
           six.pop_back();
            two.pop_back();
            one.pop_back();
            continue;
        }
        if(six.size() > 0 && three.size() > 0 && one.size() > 0)
        {
            ans[2]++;
            six.pop_back();
            three.pop_back();
            one.pop_back();
            continue;
        }
        flag = false;
        break;
    }
    if(flag == false)
        printf("-1\n");
    else
    {
        for(int i=0; i<ans[0]; i++)
            printf("1 2 4\n");
        for(int i=0; i<ans[1]; i++)
            printf("1 2 6\n");
        for(int i=0; i<ans[2]; i++)
            printf("1 3 6\n");
    }
}