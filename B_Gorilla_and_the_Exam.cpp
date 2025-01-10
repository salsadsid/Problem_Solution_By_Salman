#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> m; 
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x ;
            m[x]++;
            
        }
        
        for(auto i :m)
        {
            v.push_back({i.first, i.second});
        }

        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.second > b.second;
        });

        if(k==0)
        {
            cout<<v.size()<<endl;
        }
        else
        {
            int count = 0;
            for(int i=v.size() - 1;i>=0;i--)
            {   
                // cout<<v[i].first<<" "<<v[i].second<<endl;
                if(k>=v[i].second)
                {
                    k= k - v[i].second;
                    count++;
                }
                else
                {
                    break;
                }
            }
            // cout<<count<<endl;
           if(v.size() - count == 0)
           {
               cout<<1<<endl;
           }
           else
           {
               cout<<v.size() - count<<endl;
           }
        }
    }
    return 0;
}