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
        string s,t;
        cin >> s >> t;
        int count1s = 0;
        int count1t = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count1s++;
            }
            if (t[i] == '1')
            {
                count1t++;
            }
        }
        if(abs(count1s-count1t)%2==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}