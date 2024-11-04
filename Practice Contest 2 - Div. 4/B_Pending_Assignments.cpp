#include <bits/stdc++.h>
using namespace std;


int main()
{
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int minutes = c*1440;
        if((a*b)>minutes)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}