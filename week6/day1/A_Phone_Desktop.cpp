#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a>>b;
        int leastScreen =ceil(b/2.0);
        int bArea = b*4;
        int totalArea = a+bArea;
        double ans = ceil(totalArea/15.00);
        cout<<(ans > leastScreen ? ans : leastScreen) << endl;
    }
    return 0;
}