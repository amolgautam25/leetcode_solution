//
// Created by agautam on 7/21/20.
//

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
    int widthOfBinaryTree(TreeNode* root) {

        unsigned int maxWidth=0;

        if (root==NULL)
            return 0;

        if(root->left==NULL && root->right ==NULL)
            return 1;

        queue<pair<TreeNode*,unsigned int>> q;
        q.push({root,1});

        while(!q.empty()){

            int size=q.size();
            for( int i=0 ; i <size;i++)
            {
                auto front = q.front();
                q.pop();
                TreeNode* temp = front.first;
                unsigned int index = front.second;
                if(temp->left!=NULL)
                {
                    q.push({temp->left,(index*2)});
                    //      cout<<temp->left->val<<" : "<<index*2<<endl;
                }
                if(temp->right!=NULL)
                {
                    q.push({temp->right,(index*2+1)});
                    //        cout<<temp->right->val<<" : "<<index*2+1<<endl;
                }


            }
            //  cout<<"level ends"<<endl;
            //  cout<<"q.size :"<<q.size()<<endl;

            if(q.size()!=0)
                maxWidth = max (maxWidth, (q.back().second - q.front().second) +1);
        }

        return maxWidth;
    }
};
