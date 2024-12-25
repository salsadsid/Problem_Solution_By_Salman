#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        map<int,int> mp;

         for(int i=0;i<n;i++)
        {
            mp[v[i]] = i+1;
        }
        int sum = 0;
        for(auto it:mp)
        {
            sum += it.second;
        }

        cout<<sum<<endl;
    }
    return 0;
}