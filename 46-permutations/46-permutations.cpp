class Solution {
public:
    void getResult(vector<int> allVal, vector<vector<int>>& res, vector<int> curr){
        vector<int> temp;
        // cout<<endl;
        //base case
        if(allVal.empty()){
            res.push_back(curr);
            return;
        }
        temp = allVal;
        for(int i=0;i<allVal.size();i++){
            curr.push_back(temp[i]);
            temp.erase(temp.begin()+i);
            // for(int i=0;i<allVal.size();i++){
            //     cout<<allVal[i]<<" ";
            // }
            // cout<<allVal.size()<<endl;
            getResult(temp, res, curr);
            curr.pop_back();
            temp = allVal;
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> allVal;
        vector<int> x;
        for(int i=0;i<nums.size();i++){
            allVal.push_back(nums[i]);
        }
        vector<vector<int>> res;
        getResult(nums, res, x);
        return res;
    }
};
