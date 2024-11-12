#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        deque<char>dq;
        for(int i=0;i<n;i++)
        {
            char a;
            cin>>a;
            dq.push_back(a);
        }

        for(int i=0;i<dq.size();i++)
        {
            if(dq[0]== '0' && dq[dq.size()-1] =='1')
            {
                dq.pop_front();
                dq.pop_back();
                i=0;
                continue;
            }
            else if(dq[0]== '1' && dq[dq.size()-1] =='0')
            {
                dq.pop_front();
                dq.pop_back();
                i=0;
                continue;
            }
            else
            {
                break;
            }
        }

        cout<<dq.size()<<endl;
    }

    return 0;
}