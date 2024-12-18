#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        int a,b,c;
        cin >> a >> b >> c;
        int ans = 0;
        int occ = 0;
        int remainingRow1=0,remainingRow2=0;
        if (a>m)
        {
            occ+=m;
        }
        else
        {
            occ+=a;
            remainingRow1=m-a;
        }

        if(b>m)
        {
            occ+=m;
        }
        else
        {
            occ+=b;
            remainingRow2=m-b;
        }

        int lastRemaining = remainingRow1+remainingRow2;

        if(c>lastRemaining)
        {
            occ+=lastRemaining;
        }
        else
        {
            occ+=c;
        }
        cout << occ << endl;

    }
    return 0;
}