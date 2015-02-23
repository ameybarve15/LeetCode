/*Given a binary tree, return the inorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},
1
\
2
/
3
return [1,3,2].

Note: Recursive solution is trivial, could you do it iteratively?

confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.*/

/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/

#include <vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	void inorderTraversalRecursive(TreeNode* root, vector<int>& vec)
	{
		if (root == NULL) return;
		inorderTraversalRecursive(root->left, vec);
		vec.push_back(root->val);
		inorderTraversalRecursive(root->right, vec);
	}

	vector<int> inorderTraversal(TreeNode *root) 
	{	
		vector<int> res;
		inorderTraversalRecursive(root, res);
		return res;
	}
};