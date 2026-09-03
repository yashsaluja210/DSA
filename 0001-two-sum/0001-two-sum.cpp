class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>heap;
        int n=nums.size();
        for(int i=0;i<n;i++){
            heap[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            if(heap.find(rem) != heap.end() && i !=heap[rem] ){
                return {i,heap[rem]};
            }
        }
        return {};
    }
};