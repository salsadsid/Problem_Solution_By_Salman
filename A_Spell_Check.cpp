#include <bits/stdc++.h>
using namespace std;


int main()
{
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        int l;
        cin>>l;
        string s;
        cin>>s;

        int strLen=s.size();

        if(strLen!=5)
        {
            cout<<"NO"<<endl;
            continue;
        }
        map<char,bool>mp;
        mp['T']=false;
        mp['i']=false;
        mp['m']=false;
        mp['u']=false;
        mp['r']=false;
        for(int i=0;i<5;i++)
        {
            auto it =mp.find(s[i]);
            if(it==mp.end())
            {
                it->second=true;
            }
        }
        
        auto it =mp.begin();

        bool flag= false;

        while(it!=mp.end())
        {
            flag= it->second;
            it++;
        }

        cout<<(false?"YES":"NO")<<endl;
    }
    return 0;
}