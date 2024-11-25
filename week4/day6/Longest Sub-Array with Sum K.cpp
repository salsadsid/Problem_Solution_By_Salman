class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        
        int n=arr.size();
        int ans=0,preSum=0;
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++)
        {
            preSum+=arr[i];
            
            if(preSum==k)
            {
                ans=max(ans,i+1);
            }
            
            if(ump.find(preSum-k)!=ump.end())
            {
                ans=max(ans,i-ump[preSum-k]);
            }
            
            if(ump.find(preSum)==ump.end())
            {
                ump[preSum]=i;
            }
        }
        
        return ans;
    }
};