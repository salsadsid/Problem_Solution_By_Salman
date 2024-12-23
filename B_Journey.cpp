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
        int n,a,b,c;
        cin>>n>>a>>b>>c;

        int threeDaysTotal=a+b+c;

        int threeDaysSegment=n/threeDaysTotal;

        int remainingDays=n%threeDaysTotal;

        int totalDayApprox=threeDaysSegment*3;

        if(remainingDays==0)
        {
            cout<<totalDayApprox<<endl;
        }
        else
        {
            if(remainingDays<=a)
            {
                cout<<totalDayApprox+1<<endl;
            }
            else if(remainingDays<=(a+b))
            {
                cout<<totalDayApprox+2<<endl;
            }
            else
            {
                cout<<totalDayApprox+3<<endl;
            }
        }
        
    }
    return 0;
}