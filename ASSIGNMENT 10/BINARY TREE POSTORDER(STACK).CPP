class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int>v;
        stack<TreeNode*>s;
        if(root){
            s.push(root);
        }
        while(!s.empty()){
            TreeNode* temp=s.top();
            if(temp->left){
                s.push(temp->left);
                temp->left=NULL;

            }
            else if(temp->right){
                s.push(temp->right);
                temp->right=NULL;

            }else{
           s.pop();
            v.push_back(temp->val);
           
        }
     }
     return v;
    }
};
