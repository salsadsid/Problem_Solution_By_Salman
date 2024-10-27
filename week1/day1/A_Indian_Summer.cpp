//============================================================================
// Problem     : https://codeforces.com/problemset/problem/44/A
// Name        : .cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
// Status      : accepted
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<string, string>> trees;

    int entries;

    cin>>entries;

    while(entries--)
    {
        // cin.ignore();
        string a,b;
        cin>>a>>b;
        // cout<<a<<" "<<b<<"\n";
        if(trees.size()==0)
        {
            trees.push_back({a,b});
        }
        else
        {
            bool flag=false;
            for(int i=0;i<trees.size();i++)
            {
                if(trees[i].first == a && trees[i].second == b)
                {
                    flag=true;
                    break;
                }
            }
            if(!flag)
            {
                 trees.push_back({a,b});
            }
        }
    }

    // for(auto [c,d]:trees)
    // {
    //     cout<<c<<" "<<d<<endl;
    // }

    cout<<trees.size()<<endl;
}