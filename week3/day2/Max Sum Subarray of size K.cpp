class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int m=arr.size(),l=0,r=0;
        long long ans=0,sum=0;
        
        while(r<m)
        {
            sum+=arr[r];
            
            if(r-l+1==k)
            {
                ans=max(ans,sum);
                sum-=arr[l];
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        
        return ans;
    }
};