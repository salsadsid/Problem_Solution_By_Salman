#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<pair<int, int>> v(a);

        for (int i = 0; i < a; i++)
        {
            int x, y;
            cin >> x >> y;
            v[i] = {x, y};
        }
        int ans = 0;
        for (int i = 0; i < a-1; i++)
        {
            pair<int, int> p = v[i];
            p.first = p.first+b;
            p.second = p.second+b;

            pair <int, int> q = v[i];
            q.first = q.first+v[i+1].first;
            q.second = q.second+v[i+1].second;

            int per = 2 * (abs(p.first - q.first) + abs(p.second - q.second));
            ans += per;
        }

    }
    return 0;
}