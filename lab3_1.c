/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void preorderRecur(struct TreeNode* root, int* arr, int* i) {
    if (root == NULL) return;

    arr[(*i)++] = root->val; 
    preorderRecur(root->left, arr, i);
    preorderRecur(root->right, arr, i);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = malloc(100*sizeof(int));
    *returnSize = 0;

    preorderRecur(root, arr, returnSize);
    return arr;
}
