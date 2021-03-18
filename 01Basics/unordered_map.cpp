// Unordered maps uses hash table instead of red black tree
// Time Complexity becomes O(1) in insertion and access (avg. time)
// Cannot use valid keys data-type like pair, vector, etc.


#include <bits/stdc++.h>
using namespace std;

void print_map(unordered_map<int, string> &m){
	cout << "Size: " << m.size() << endl;
	for(auto &pr: m){
		cout << pr.first << " " << pr.second << endl; 
	}
}

int main(){
	unordered_map<int, string> m;
	m[5] = "abc";
	m[1] = "bhu";
	m[3] = "yut";
	m[2] = "yui";
	m[4] = "oio";

	print_map(m);
}