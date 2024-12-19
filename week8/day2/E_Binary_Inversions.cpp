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
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        long long maxo=0,zero=0,one=0;
    
        for(long long i=0;i<n;i++){
            if(v[i]==0){
                maxo+=one;
                zero++;
            }
            else{
                one++;
            }
        }
    
        long long count1=0,maxo1=0;
        for(long long i=0;i<n;i++){
            if(v[i]==0){
                zero--;
                maxo1=max(maxo1,maxo-count1+zero);
            }
            else if(v[i]==1){
                count1++;
            }
        }
        
        // changing last one to zero
        long long count0=0,maxo2=0;
        for(long long i=n-1;i>=0;i--){
            if(v[i]==1){
                one--;
                maxo2=max(maxo2,maxo+one-count0);
            }
            else{
                count0++;
            }
        }
        cout<<max({maxo,maxo1,maxo2})<<endl;
    }

    return 0;
}