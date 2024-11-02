#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n>>m;
        map<int, ll> mp;
        for (int i = 0; i < m; i++)
        {
            int x,y;
            cin >> x>>y;
            if(mp.find(x)==mp.end()){
                mp[x]=y;
            }
            else{
                mp[x]=mp[x]+y;
            }
        }
        
        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<endl;
        //     cout<<mp.size()<<endl;
        // }

        vector<int> v;

        for(auto i:mp){
            v.push_back(i.second);
        }

        // for(int it:v){
        //     cout<<it<<" ";
        // }

        sort(v.begin(),v.end(),greater<int>());

        ll sum=0;

        if(v.size()>n){
            for(int i=0;i<n;i++){
                sum+=v[i];
            }
        }
        else{
            for(int i=0;i<v.size();i++){
                sum+=v[i];
            }
        }

        cout<<sum<<endl;
    }
    return 0;
}