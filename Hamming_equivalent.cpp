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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> v2(n);

        for(int i=0;i<n;i++)
        {
            string s;
            int count = 0;
            while(v[i])
            {
                if(v[i]&1)
                {
                    count++;
                }
                v[i]>>=1;
            }
            v2[i] = count;
        }

        for(int i=0;i<n;i++)
        {
            cout << v2[i] << " ";
        }
        cout << endl;

    }
    return 0;
}