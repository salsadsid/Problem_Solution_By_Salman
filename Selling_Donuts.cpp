#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>donut(n);
        vector<int>people(m);

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            donut[i]=x;
        }

        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            people[i]=x;
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<donut[i]<<" ";
        // }
        int served=0;
        for(int i=0;i<m;i++)
        {
            if(donut[people[i]-1])
            {
                served++;
                donut[people[i]-1]=donut[people[i]-1]-1;
            }
            // cout<<people[i]<<" ";
        }

        cout<<m-served<<endl;
    }
    return 0;
}