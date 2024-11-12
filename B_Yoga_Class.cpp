#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(b*2 >=c)
        {
            cout<<a*b<<endl;
        }
        else
        {
            int y2=a/2;
            if(y2!=0)
            {
                int y2rupees= y2*c;
                int y1takes=a-(y2*2);
                int y1rupees=b*y1takes;
                cout<<y1rupees+y2rupees<<endl;
            }
            else
            {
                cout<<a*b<<endl;
            }
        }
    }
    return 0;
}