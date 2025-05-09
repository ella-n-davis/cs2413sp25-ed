/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#include<stdio.h>

bool mirr(struct TreeNode* r, struct TreeNode* l) {
    if(l != NULL){
         printf("l: %d\n", l->val);
    }
    else{
        printf("l null\n");
    }
    if(r != NULL){
         printf("r: %d\n", r->val);
    }
    else{
        printf("r null\n");
    }

   
    if(r == NULL && l == NULL){
        return true;
    }
    if(l == NULL || r == NULL){
        return false;
    }

    if(l->val != r->val){
        return false;
    }

    return (mirr(l->right, r->left) && mirr(l->left, r->right));
}


bool isSymmetric(struct TreeNode* root) {
    return mirr(root->right, root->left);
}
