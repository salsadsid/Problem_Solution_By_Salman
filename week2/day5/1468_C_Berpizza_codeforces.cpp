//============================================================================
// Problem     : https://codeforces.com/problemset/problem/1468/C
// Name        : 1468_C_Berpizza_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    set<pair<int,int>> s;
    multiset<pair<int,int>> ml;
    vector<int> ans;
    int count=1;
    while(t--)
    {
        int a;
        cin>>a;

        if(a==1)
        {
            int b;
            cin>>b;

            s.insert({count,b});
            ml.insert({b,-count});
            count++;
        }
        else if(a==2)
        {
            int pos=s.begin()->first;
            int money=s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});
        }
        else
        {
            int pos=-ml.rbegin()->second;
            int money= ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }
    }

    for(auto it:ans)
    {
        cout<<it<<" ";
    }

    return 0;
}