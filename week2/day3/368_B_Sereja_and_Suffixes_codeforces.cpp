//============================================================================
// Problem     : https://codeforces.com/problemset/problem/368/B
// Name        : 368_B_Sereja_and_Suffixes_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    
    vector<int>vt;
    vector<int>vt2;
    set<int>st;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        vt.push_back(x);
    }

    for(int i=vt.size()-1;i>=0;i--)
    {
        st.insert(vt[i]);
        vt2.push_back(st.size());
    }

    sort(vt2.begin(),vt2.end(),greater<int>());

    // for(int a:vt2)
    // {
    //     cout<<a<<endl;
    // }


    // int count=0;
    for(int i=1;i<=m;i++)
    {
        int y;
        cin>>y;
        cout<<vt2[y-1]<<endl;
    }

    return 0;
}