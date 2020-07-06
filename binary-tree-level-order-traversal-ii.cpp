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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> answer;
        vector<int> temp;

        if (root==NULL) return answer;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            vector<int> temp;
            int k=q.size();
            for(int i=0;i<k;i++)
            {
                TreeNode* p = q.front();
                q.pop();
                temp.push_back(p->val);
                if(p->left)
                {
                    q.push(p->left);

                }
                if(p->right)
                {
                    q.push(p->right);
                }


            }
            answer.push_back(temp);

        }
        reverse(answer.begin(),answer.end());
        return answer;

    }
};