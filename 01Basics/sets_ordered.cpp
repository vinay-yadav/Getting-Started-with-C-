/*
    in multiset, elements can occur multiple times but in sorted order.
    in unordered_set, elements stored in unsorted ordere

    when erase() is used using iterator, it deletes that particular iterator but in case of passing simple value
    it deletes the elements and all its occurence (in multiset).
*/

#include <bits/stdc++.h>
using namespace std;

void printSet(set<string> &s){
	// for(string value: s)
	// 	cout << value << endl;

	for(auto it = s.begin(); it != s.end(); ++it)
		cout << *it << endl;
}

int main(){
	/* declaring sets */
	set<string> s;

	/* adding data to sets */
	s.insert("abc");
	s.insert("pqr");
	s.insert("def");

	/* finding value in sets */
	auto it = s.find("pqr");

	/* deleting element from sets */
	// if(it != s.end())
	// 	s.erase(it);

	s.erase("abc");		// erase() can be use, using iterator or value itself

	// if(it == s.end())
	// 	cout << "element does not exists" << endl;
	// else
	// 	cout << *it << endl;

	printSet(s);
}
