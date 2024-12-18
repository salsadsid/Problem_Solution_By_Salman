#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string bs;
        cin >> bs;
        int zero = 0;
        int one = 0;
        int cnt = 0;
        int cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if(bs[i] == '0') zero++;
            else one++;
            if(i!=0 && i!=n-1)
            {
                if(bs[i]==bs[i-1] && bs[i]==bs[i+1])
                {
                    cnt++;
                }
            }
            if(i!=n-1)
            {
                if(bs[i]==bs[i+1])
                {
                    cnt1++;
                }
            }
        }
        if(abs(zero-one) > 1)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(cnt != 0)
        {
            cout<<"No"<<endl;
            continue;
        }

        if(cnt1 > 2)
        {
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}