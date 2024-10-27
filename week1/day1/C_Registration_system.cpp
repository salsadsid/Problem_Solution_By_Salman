//============================================================================
// Problem     : https://codeforces.com/problemset/problem/4/C
// Name        : .cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
// Status      : accepted
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    vector<pair<string,int>> names;
    while(testCase--)
    {
        string a;
        cin>>a;
        if(names.size()==0)
        {
            names.push_back({a,0});
            cout<<"OK"<<endl;
            continue;
        }
        else
        {
            bool flag=false;
            int i=0;
            for( ;i<names.size();i++)
            {
                if(names[i].first==a)
                {
                    flag=true;
                    names[i].second+=1;
                    break;
                }
            }
            if(flag)
            {
                cout<<names[i].first<<names[i].second<<endl;
            }
            else
            {
                names.push_back({a,0});
                cout<<"OK"<<endl;
            }
        }
    }
}