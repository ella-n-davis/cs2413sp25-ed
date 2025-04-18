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
void inorderRecur(struct TreeNode* root, int* arr, int* i) {
    if (root == NULL) return;

    inorderRecur(root->left, arr, i);
    arr[(*i)++] = root->val; 
    inorderRecur(root->right, arr, i);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = malloc(100*sizeof(int));
    *returnSize = 0;

    inorderRecur(root, arr, returnSize);
    return arr;
}
