class Solution {
  public:
    int maxLength(vector<int>& arr) {
        unordered_map<long long,int>presummap;
        int k=0;
        long long sum=0;
        int n=arr.size();
        int maxlen=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k){
                maxlen=max(maxlen,i+1);
            }
            long long rem=sum-k;
            if(presummap.find(rem) != presummap.end()){
                int length=i-presummap[rem];
                maxlen=max(maxlen,length);
            }
            if(presummap.find(sum)==presummap.end()){
                presummap[sum]=i;
            }
            
        }
        return maxlen;
        
    }
};