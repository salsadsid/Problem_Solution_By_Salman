#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;

    map <int, set<int>> mp;

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;

        mp[a].insert(i);
    }
    // for(auto [a,b]:mp)
    // {
    //     cout<<a<<endl;
    //     auto it = b.begin();
    //     while(it!=b.end())
    //     {
    //         cout<<*it<<endl;
    //         it++;
    //     }
    // }
    while(m--)
    {
        int x;
        int y;
        cin>>x>>y;

        if(mp.find(x)==mp.end()||mp.find(y)==mp.end() )
        {
            cout<<"NO"<<endl;
        }
        else
        {
            auto it = mp[x].begin();
        
            auto it2=mp[y].rbegin();
       
        // cout<<it->first<<" "<<it->second<<endl;
        // cout<<*it<<" "<<*it2<<endl;
            if(*it <= *it2)
            {
                cout<<"YES"<<endl;
            }
            else
            {   
                cout<<"NO"<<endl;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}