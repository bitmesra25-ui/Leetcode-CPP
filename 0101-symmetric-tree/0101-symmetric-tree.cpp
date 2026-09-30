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
    bool isidentical(TreeNode* p ,TreeNode* q){
        if(p==NULL || q==NULL){
            return p==q;
        }
        int left=isidentical(p->left,q->right);
        int right=isidentical(p->right,q->left);
        return (p->val==q->val) && left && right;

    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true ;
        }
        return isidentical(root->left,root->right);
    }
};