#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,veH,vaH;
        cin >> n>>veH>>vaH;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum += v[i];
        }   
        vaH=sum+vaH;
        veH=veH+v[0];
        if (vaH > veH)
        {
            cout << "Varun" << endl;
        }
        else if(vaH<veH)
        {
            cout << "Ved" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }
    return 0;
}