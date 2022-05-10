class Solution {
public:
    void recursion(int sum, int depth, int k, int n, vector<vector<int>>& res, vector<int> curr, int val){   
        //base case
        if(depth == k){
            if(sum == n){
                res.push_back(curr);
            }
            return;
        }
        for(int i=val;i<=9;i++){
            curr.push_back(i);
            recursion(sum+i, depth+1, k, n, res, curr, i+1);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> curr;
        recursion(0,0,k,n,res,curr,1);
        return res;
    }
};