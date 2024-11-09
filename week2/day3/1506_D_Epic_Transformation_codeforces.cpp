//============================================================================
// Problem     : https://codeforces.com/problemset/problem/1506/D
// Name        : 1506_D_Epic_Transformation_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        map<int,int> mp;
        vector<int> vt;
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }

        priority_queue<int> pq;

        for (auto [x,y]:mp)
        {
            pq.push(y);
        }

        while(!pq.empty())
        {
            if(pq.size()<2)
            {
                break;
            }

            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();

            x--;
            y--;

            if(x>=1)
            {
                pq.push(x);
            }

            if(y>=1)
            {
                pq.push(y);
            }
        }

        int sum=0;

        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
    }

    return 0;
}