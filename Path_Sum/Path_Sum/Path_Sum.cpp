/*Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

For example:
Given the below binary tree and sum = 22,
              5
             / \
            4   8
           /   / \
          11  13  4
         /  \      \
        7    2      1
return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
*/

struct TreeNode
{
	int data;
	TreeNode* leftChild;
	TreeNode* rightChild;
};

bool hasPathSum(TreeNode *root, int sum) {
	if (root == NULL) {
		return (sum == 0);
	}
	else {
		int subSum = sum - root->data;
		if (subSum == 0 && root->leftChild == NULL && root->rightChild == NULL)
			return true;

		return (hasPathSum(root->leftChild, subSum) || hasPathSum(root->rightChild, subSum));
	}	
}