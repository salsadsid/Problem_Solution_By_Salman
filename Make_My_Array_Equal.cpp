#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        int a;
        cin>>a;

        map<int,int>mp;
        for(int i=0;i<a;i++)
        {
            int x;
            cin>>x;
            if(x!=0)
            {
                mp[x]++;
            }
        }

        if (mp.size()==1||mp.size()==0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}