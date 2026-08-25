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
   bool rec(TreeNode* p, TreeNode* q){
     if(p->val!=q->val){
          return false;
        }
        bool x=true;
        if(p->left!=nullptr&&q->left!=nullptr){
            bool d=rec(p->left,q->left);
            x=x&d;
        }else if(p->left==nullptr&&q->left!=nullptr){
            return false;
        }
        else if(p->left!=nullptr&&q->left==nullptr){
            return false;
        }
        if(p->right!=nullptr&&q->right!=nullptr){
        bool d=rec(p->right,q->right);
         x=x&d;
        }else if(p->right==nullptr&&q->right!=nullptr){
            return false;
        }
        else if(p->right!=nullptr&&q->right==nullptr){
            return false;
        }
        return x;
   }


    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr&&q==nullptr) return true;
        if(p==nullptr||q==nullptr) return false;
        return rec(p,q);


    }
};
