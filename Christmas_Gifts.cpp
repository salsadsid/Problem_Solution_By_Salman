#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,l,w;
        cin>>h>>l>>w;

        int totalArea = 2*((w*l)+(h*l)+(h*w));

        int canCover= 1000/totalArea;

        cout<<canCover<<endl;

    }
    return 0;
}