#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        if (m>n)
        {
            cout << "NO" << endl;
        }
        else
        {
           if(m%2==0 && n%2==0)
           {
               cout << "YES" << endl;
           }
           else if (m%2==1 && n%2==1)
           {
               cout << "YES" << endl;
           }
           else
           {
               cout << "NO" << endl;
           }
        }

    }
    return 0;
}