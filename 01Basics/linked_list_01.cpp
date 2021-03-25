#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

};

void print(Node *n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
}

int main(){
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;


    head = new Node();
    first = new Node();
    second = new Node(); 

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = NULL;

    print(head);
}