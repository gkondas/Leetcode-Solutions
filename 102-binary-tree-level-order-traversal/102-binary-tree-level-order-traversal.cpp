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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> out;
        if(!root) return out;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int size = (int) q.size();
            vector<int> currentLevel;
            for(int i=0;i<size;i++){
                TreeNode* now = q.front();
                q.pop();
                currentLevel.push_back(now->val);
                if(now->left) q.push(now->left);
                if(now->right) q.push(now->right);
                
            }
            
            out.push_back(currentLevel);
        }
        
        return out;
        
        
    }
};