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
        int arr[n];
        int priceArr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        priceArr[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            int price=arr[i]-i;
            if(price<0)
            {
                priceArr[i]=0;
            }
            else
            {
                priceArr[i]=price;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=priceArr[i];
        }

        cout<<sum<<endl;
    }       
    return 0;
}