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
        int count=0;
        for(int i=0;i<5;i++)
        {
            if(s[i]=='T'||s[i]=='i'||s[i]=='m'||s[i]=='u'||s[i]=='r')
            {
                count++;
            }
        }

        if(count==5)
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