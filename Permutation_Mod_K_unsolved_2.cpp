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

        vector<int>arr2;
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
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
            if(arr[i]%k==0)
            {
                arr2.push_back(arr[i]);
            }
        }

        for(int i=0;i<arr2.size();i++)
        {
            if(arr2[i]==n)
            {
                swap(arr[arr2[i]-2],arr[arr2[i]-1]);
            }
            else 
            {
                swap(arr[arr2[i]-1],arr[arr2[i]]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;

    }
    return 0;
}