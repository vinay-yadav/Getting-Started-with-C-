/*NAIVE METHOD*/

#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

Node* newNode(int key){
	Node *node = new Node;
	node->data = key;

	node->next = nullptr;
	return node;
}

Node *constructList(){
	Node *first = newNode(4);
	Node *second = newNode(21);
	Node *third = newNode(13);

	Node *head = first;
	first->next = second;
	second->next = third;

	return head;
}

void printLinkedList(Node *n){
	while(n){
		cout << n->data << " ";
		n = n->next;
	}
}

int main(){
	Node *head = constructList();
	printLinkedList(head);
}