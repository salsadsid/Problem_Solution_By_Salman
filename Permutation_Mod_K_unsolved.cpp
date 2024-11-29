#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        if(n==1)
        {
            if(1%k==0)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
            continue;
        }
        if(k==n)
        {
            swap(arr[k-2],arr[k-1]);
        }
        else if(k<n)
        {
            swap(arr[k-1],arr[k]);
        }
       
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}