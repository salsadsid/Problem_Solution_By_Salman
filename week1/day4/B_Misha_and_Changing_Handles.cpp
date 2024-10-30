#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCase;
    cin>>testCase;
    map<string,string> mp;
    while(testCase--)
    {
        string a,b;
        cin>>a>>b;
        bool flag=false;
        for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            if(it->second==a)
            {
                mp[it->first]=b;
                flag=true;
                break;
            }
        }

        if(!flag)
        {
            mp[a]=b;
        } 

    }

    cout<<mp.size()<<endl;
    for(auto [c,d]:mp)
    {
        cout<<c<<" "<<d<<endl;
    }
    return 0;
}