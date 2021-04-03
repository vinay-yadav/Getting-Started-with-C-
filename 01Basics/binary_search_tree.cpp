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


int main(){	
	Node *root = NULL;

	root = insertNode(root, 15);
	root = insertNode(root, 10);
	root = insertNode(root, 20);
	root = insertNode(root, 25);
	root = insertNode(root, 8);
	root = insertNode(root, 12);

	if(recursionSearch(root, 12))
		cout << "in tree";
	else
		cout << "not in tree";
}
