#include <bits/stdc++.h>
using namespace std;


int main()
{
    int testCase;
    cin>>testCase;
    map<string,int>mp;
    deque<string> dq;
    int count=1;
    while(testCase--)
    {
        string a;
        cin>>a;
        mp[a]=count++;
        if(mp.find(a)!=mp.end())
        {
            // cout<<mp[a]<<endl;
            dq.push_front(a);
        }
        else
        {
            dq.push_back(a);
        }
    }

    for(auto it:dq)
    {
        cout<<it<<" ";
    }
    return 0;
}