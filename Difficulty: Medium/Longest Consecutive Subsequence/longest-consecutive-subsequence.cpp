class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        int longest=1,count=0;
        int n=arr.size();
        if(n==0) return 0;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }
        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int x=it;
                count=1;
            while(st.find(x+1) != st.end()){
                x=x+1;
                count+=1;
            } 
            longest=max(longest,count);
            }
        }
     return longest;   
    }
};