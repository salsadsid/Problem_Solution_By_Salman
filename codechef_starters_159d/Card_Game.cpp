#include <bits/stdc++.h>
using namespace std;


int main()
{
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        int x,y;
        cin>>x>>y;

        int oddsCount,evensCount;

        if(x%2==0)
        {
            oddsCount=x/2;
            evensCount=x/2;
        }
        else
        {
            oddsCount=(x/2)+1;
            evensCount=x/2;
        }
        int ans=0;
        if(y%2==0)
        {
            ans= evensCount-1;
        }else
        {
            ans= oddsCount-1;
        }
        cout<<ans<<endl;
    }

    return 0;
}