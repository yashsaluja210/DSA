class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>temp;
        long long ans=1;
        temp.push_back(1);
        for(int col=1;col<=rowIndex;col++){
            ans=ans*(rowIndex-(col-1));
            ans=ans/col;
            temp.push_back(ans);
        }
        return temp;
    }
};