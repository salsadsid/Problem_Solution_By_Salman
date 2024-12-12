#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,l,r;
        cin >> n>>l>>r;
        int arr[n];
        int maxNum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxNum = max(maxNum, arr[i]);
        }
        int maxBits=__lg(maxNum);
        int freq[n][maxBits+1];

        for(int i=0;i<n;i++)
        {
            for(int k=maxBits;k>=0;k--)
            {
                if((arr[i]>>k)& 1)
                {
                    freq[i][k]=1;
                }
                else
                {
                    freq[i][k]=0;
                }
            }
        }
        int oneCount=0;
        for(int i=0;i<n;i++)
        {
            for(int k=maxBits;k>=0;k--)
            {
                cout<<freq[i][k]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}