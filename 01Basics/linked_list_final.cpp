/* Linked list with push and pop operation */

#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

Node* push(int key, Node* next){
	Node *node = new Node;
	node->data = key;
	node->next = next;

	return node;
}

int pop(int key, Node* next){
	Node* previos = NULL;

	if(!next){
		cout << "No elements to remove" << endl;
		return 0;
	}

	while(next){
		if(next->data == key){
			previos->next = next->next;
			int item = next->data;

			delete next;
			return item;
		}

		previos = next;
		next = next->next;
	}

	cout << "Element " << key << " not in the list" << endl;
	return 0;
}

void printList(Node* head){
	while(head){
		cout << head->next << " -> " << head->data << endl;
		head = head->next;
	}
}

int main(){
	int n;
	cin >> n;

	Node *head = nullptr;

	while(n--){
		int x;
		cin >> x;
		head = push(x, head);
	}

	printList(head);
	cout << endl;

	int item = pop(111, head);
	if(item)
		cout << "Element remove: " << item << endl;

	cout << endl;
	printList(head);
}