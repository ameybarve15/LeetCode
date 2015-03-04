/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include <iostream>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    int minDepth(TreeNode *root) {
       if (root == NULL) return 0;

	   int leftDepth = minDepth(root->left);
	   int rightDepth = minDepth(root->right);

	   if (leftDepth == 0 && rightDepth == 0)
		   return 1;

	   if (leftDepth == 0) leftDepth = INT_MAX;
	   if (rightDepth == 0) rightDepth = INT_MAX;

	   return min(leftDepth, rightDepth) + 1;
    }
};