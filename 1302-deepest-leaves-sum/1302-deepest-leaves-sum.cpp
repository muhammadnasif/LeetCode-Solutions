/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void recursion(TreeNode* root, int *sum, int *maxDeep, int currDeep){
        //base case
        if(root == 0){
            return ;
        }
        recursion(root->right, sum, maxDeep, currDeep+1);
        recursion(root->left, sum, maxDeep, currDeep+1);
        if((*maxDeep)<currDeep){
            (*maxDeep) = currDeep;
            (*sum) = root->val;
        }
        else if((*maxDeep) == currDeep){
            (*sum) = (*sum) + root->val;
        }
        
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int sum=0,maxDeep=0;
        int res;
        recursion(root, &sum, &maxDeep, 0);
        
        return sum;
    }
};