#include <bits/stdc++.h>
using namespace std;


int main()
{
    int testCase;
    cin>>testCase;
    while (testCase--)
    {
        int a,b;
        string s;
        cin>>a>>b>>s;
        int remains=a-b;
        map<char,int>mp;

        for(int i=0;i<a;i++)
        {
            mp[s[i]]++;
        }

        int odds=0;

        for(auto it:mp)
        {
            if(it.second %2 !=0)
            {
                odds++;
            }
        }

        if(b>=a)
        {
            cout<<"NO"<<endl;
        }
        else if(b >= odds-1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}