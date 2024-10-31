#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;

    cin >> s;
    
    map<char,int>mp;

    for(int i=0;i<s.size();i++)
    {
       mp.insert({s[i],1});
    }
    
    bool flag=false;
    char indentified;
    for(char i='a';i<='z';i++)
    {
        if(mp.find(i)==mp.end())
        {   
            flag=true;
            indentified=i;
            break;
        }
    }

    if(flag)
    {
        cout<<indentified<<endl;
    }
    else
    {
        cout<<"None"<<endl;
    }

    return 0;
}