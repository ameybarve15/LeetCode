/*Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.
*/

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

	bool isValidBST(TreeNode *root) {
		if (root == NULL) return true;
		vector<int> vec;
		inorderTraversalRecursive(root, vec);

		for (int i=0; i<vec.size()-1; i++)
		{
			if (vec.at(i) >= vec.at(i+1))
				return false;
		}
		return true;
	}
};