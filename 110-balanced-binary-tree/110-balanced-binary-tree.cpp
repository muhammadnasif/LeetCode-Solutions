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
    int calcDepth(TreeNode* root){
        if(root==0){
            return 1;
        }
        int l=calcDepth(root->left);
        int r=calcDepth(root->right);
        cout<<"node val -- "<<root->val<<" | "<<l<<" "<<r<<endl;
        if(abs(l-r)>1){
            return 99999;
        }
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        int d = calcDepth(root);
        cout<<"Deep -- "<<d<<endl;
        if(d>=99999){
            return false;
        }
        
        return true;
    }
};