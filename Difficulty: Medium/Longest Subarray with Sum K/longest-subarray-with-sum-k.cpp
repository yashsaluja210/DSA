class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<long long,int>presummap;
        int maxlen=0;
        long long sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k){
                maxlen= max(maxlen,i+1);
            }
            long long  rem=sum-k;
            if(presummap.find(rem) != presummap.end()){
                int length=i-presummap[rem];
                maxlen=max(maxlen,length);
            }
            if(presummap.find(sum) ==presummap.end()){
            presummap[sum]=i;
            }
        }
        return maxlen;
    }
};