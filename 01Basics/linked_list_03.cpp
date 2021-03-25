#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

Node *newNode(int key, Node *next){
	Node *temp = new Node;
	temp->data = key;
	temp->next = next;

	return temp;
}

Node *constructList(vector<int> &keys){
	Node *head, *node = nullptr;

	for(int k: keys){
		node = newNode(k, node);
		head = node; 
	}

	return head;
}

void printList(Node *head){
	while(head){
		cout << head->data << " ";
		head = head->next;
	}
}


int main(){
	int n;
	vector<int> list;

	cin >> n;
	for(int i=0; i < n; ++i){
		int x;
		cin >> x;
		list.push_back(x);
	}

	Node *head = constructList(list);

	printList(head);
}