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
        
        sort(s.begin(),s.end());

        if(s=="Timru")
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