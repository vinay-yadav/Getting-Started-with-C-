/*
 tree
      ----
       1    <-- root
     /   \
    2     3  

*/

#include <bits/stdc++.h>
using namespace std;


class Tree{
public:
	int data;
	Tree *left, *right;

	// Construtor
	Tree(int key){
		data = key;
		left = nullptr;
		right = nullptr;
	}
};

int main(){
	Tree *root = new Tree(1);
	root->left = new Tree(2);
	root->right = new Tree(3);
}
