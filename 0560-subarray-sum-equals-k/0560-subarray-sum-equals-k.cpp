class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int count=0,prefixsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            int rem=prefixsum-k;
            count+=mpp[rem];
            mpp[prefixsum]+=1;

        }
       return count;  
    }
};