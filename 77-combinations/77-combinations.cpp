class Solution {
public:
    
    void getResult(int n, int k, int start, int depth, vector<vector<int>>& res, vector<int> vecRes){
        if(depth==k){
            res.push_back(vecRes);
            return;
        }
        for(int i=start; i<=n;i++){
            vecRes.push_back(i);
            getResult(n, k, i+1, depth+1, res, vecRes);
            vecRes.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> x;
        // res.push_back(x);
        getResult(n, k, 1, 0, res, x);
        return res;
    }
};