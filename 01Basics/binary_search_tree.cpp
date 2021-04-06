/*
DFS Traversal:
(a) Inorder   (Left, Root, Right)
(b) Preorder  (Root, Left, Right)
(c) Postorder (Left, Right, Root)
*/

#include <bits/stdc++.h>
using namespace std;


class Node{
public:
	int data;
	Node *left, *right;
};


Node* createNode(int key){
	Node *node = new Node;
	node->data = key;
	node->left = node->right = NULL;

	return node;
}


Node* insertNode(Node *head, int key){
	if(head == NULL)
		head = createNode(key);

	else if(key <= head->data)
		head->left = insertNode(head->left, key);
	else
		head->right = insertNode(head->right, key);

	return head;	
}


bool search(Node *head, int key){
	while(head){
		if(head->data == key)
			return true;
		else if(key <= head->data){
			if(head->left == NULL)
				return false;
			head = head->left;
		}else{
			if(head->right == NULL)
				return false;
			head = head->right;
		}

	}

	cout << "Empty tree" << endl;
	return false;
}

bool recursionSearch(Node *head, int key){
	if(head == NULL)
		return false;

	else if(head->data == key)
		return true;

	else if(key <= head->data)
		return recursionSearch(head->left, key);
	else
		return recursionSearch(head->right, key);
}


/* Global queue for breadth for search */
queue<Node *> maintainer;

/* BFS Traversal*/
void level_order_display(Node *head){
	if(head == NULL) return;

	maintainer.push(head);

	cout << "BFS Traversal: ";
	while(!maintainer.empty()){
		Node *check = maintainer.front();
		maintainer.pop();
		cout << check->data << " ";

		if(check->left) maintainer.push(check->left);
		if(check->right) maintainer.push(check->right);
	}
	
	cout << endl;

	return;
}

/* DFS Inorder Traversal (LEFT PARENT RIGHT) */
void dfs_inorder(Node *head){
	if(head == NULL) return;

	dfs_inorder(head->left);

	cout << head->data << " ";

	dfs_inorder(head->right);
}


/* DFS Pre-order Traversal (PARENT LEFT RIGHT) */

/* Global stack */
stack<Node *> pre;
void dfs_preorder(Node *head){
	pre.push(head);

	cout << "DFS Pre-order: ";

	while(!pre.empty()){
		Node *check = pre.top();
		pre.pop();

		cout << check->data << " ";

		if(check->right != NULL) pre.push(check->right);

		if(check->left != NULL) pre.push(check->left);
	}

	cout << endl;
}


void recursivePreorder(Node *node)
{
    if (node == NULL)
        return;
  
    /* first print data of node */
    cout << node->data << " ";
  
    /* then recur on left sutree */
    recursivePreorder(node->left);
  
    /* now recur on right subtree */
    recursivePreorder(node->right);
}


void dfs_postorder(Node *head){
	if(head == NULL) return;

	dfs_postorder(head->left);

	dfs_postorder(head->right);

	cout << head->data << " ";
}


int main(){	
	Node *root = NULL;

	root = insertNode(root, 15);
	root = insertNode(root, 10);
	root = insertNode(root, 20);
	root = insertNode(root, 25);
	root = insertNode(root, 8);
	root = insertNode(root, 12);

	// if(recursionSearch(root, 12))
	// 	cout << "in tree";
	// else
	// 	cout << "not in tree";

	level_order_display(root);

	cout << endl << "DFS Inorder: ";
	dfs_inorder(root);

	cout << endl << endl;
	dfs_preorder(root);

	cout << endl << "DFS Recursive Pre-order: ";
	recursivePreorder(root);

	cout << endl << endl << "DFS Post-Order: ";
	dfs_postorder(root);

}
