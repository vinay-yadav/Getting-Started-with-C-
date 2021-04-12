#include <bits/stdc++.h>
using namespace std;


vector<int> nextGreaterElement(vector<int> v){
	stack<int> check;
	vector<int> nge(v.size());

	for(int i = 0; i < v.size(); ++i){
		while(!check.empty() && v[i] > v[check.top()]){
			nge[check.top()] = i;
			check.pop();
		}

		check.push(i);
	}

	while(!check.empty()){
		nge[check.top()] = -1;
		check.pop();
	}

	return nge;
}


int main(){
	vector<int> arr = {4, 5, 2, 25, 7, 8};

	vector<int> nge = nextGreaterElement(arr);

	for(int i = 0; i < arr.size(); ++i)
		cout << arr[i] << " " << (nge[i] == -1 ? -1 : arr[nge[i]]) << endl;
}
