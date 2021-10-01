// C++ Program to count number of turns
// in a Binary Tree.
#include <bits/stdc++.h>
using namespace std;

// A Binary Tree Node
struct Node {
	struct Node* left, *right;
	int key;
};

// Utility function to create a new
// tree Node
Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return temp;
}

// Utility function to find the LCA of
// two given values n1 and n2.
Node* findLCA(struct Node* root,
						int n1, int n2)
{
	// Base case
	if (root == NULL)
		return NULL;

	// If either n1 or n2 matches with
	// root's key, report the presence by
	// returning root (Note that if a key
	// is ancestor of other, then the
	// ancestor key becomes LCA
	if (root->key == n1 || root->key == n2)
		return root;

	// Look for keys in left and right subtrees
	Node* left_lca = findLCA(root->left, n1, n2);
	Node* right_lca = findLCA(root->right, n1, n2);

	// If both of the above calls return
	// Non-NULL, then one key is present
	// in once subtree and other is present
	// in other, So this node is the LCA
	if (left_lca && right_lca)
		return root;

	// Otherwise check if left subtree or right
	// subtree is LCA
	return (left_lca != NULL) ? left_lca :
								right_lca;
}

// function count number of turn need to reach
// given node from it's LCA we have two way to
bool CountTurn(Node* root, int key, bool turn,
								int* count)
{
	if (root == NULL)
		return false;

	// if found the key value in tree
	if (root->key == key)
		return true;

	// Case 1:
	if (turn == true) {
		if (CountTurn(root->left, key, turn, count))
			return true;
		if (CountTurn(root->right, key, !turn, count)) {
			*count += 1;
			return true;
		}
	}
	else // Case 2:
	{
		if (CountTurn(root->right, key, turn, count))
			return true;
		if (CountTurn(root->left, key, !turn, count)) {
			*count += 1;
			return true;
		}
	}
	return false;
}

// Function to find nodes common to given two nodes
int NumberOFTurn(struct Node* root, int first,
								int second)
{
	Node* LCA = findLCA(root, first, second);

	// there is no path between these two node
	if (LCA == NULL)
		return -1;
	int Count = 0;

	// case 1:
	if (LCA->key != first && LCA->key != second) {
		
		// count number of turns needs to reached
		// the second node from LCA
		if (CountTurn(LCA->right, second, false,
										&Count)
			|| CountTurn(LCA->left, second, true,
										&Count))
			;
		
		// count number of turns needs to reached
		// the first node from LCA
		if (CountTurn(LCA->left, first, true,
									&Count)
			|| CountTurn(LCA->right, first, false,
									&Count))
			;
		return Count + 1;
	}

	// case 2:
	if (LCA->key == first) {

		// count number of turns needs to reached
		// the second node from LCA
		CountTurn(LCA->right, second, false, &Count);
		CountTurn(LCA->left, second, true, &Count);
		return Count;
	} else {

		// count number of turns needs to reached
		// the first node from LCA1
		CountTurn(LCA->right, first, false, &Count);
		CountTurn(LCA->left, first, true, &Count);
		return Count;
	}
}

// Driver program to test above functions
int main()
{
	// Let us create binary tree given in the above
	// example
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	root->left->left->left = newNode(8);
	root->right->left->left = newNode(9);
	root->right->left->right = newNode(10);

	int turn = 0;
	if ((turn = NumberOFTurn(root, 1, 5)))
		cout << turn << endl;
	else
		cout << "Not Possible" << endl;

	return 0;
}
