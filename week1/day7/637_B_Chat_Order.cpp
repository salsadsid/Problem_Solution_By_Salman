#include <bits/stdc++.h>
using namespace std;


string names[200005];
map<string,int> mp;

int main()
{
    int testCase;
    cin>>testCase;


    for(int i=0;i<testCase;i++)
    {
        string s;
        cin>>s;
        names[i]=s;
    }

    // for(int i=0;i<testCase;i++)
    // {
    //     cout<<names[i];
    // }

    for(int i=testCase;i>=0;i--)
    {
        if(!mp[names[i]])
        {
            cout<<names[i]<<endl;
        }
        mp[names[i]]=1;
    }

    return 0;
}