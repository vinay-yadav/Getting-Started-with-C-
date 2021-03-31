/*
INPUT:
3
a b 4
1 2 3 4
c d 2
1 2
d f 3
2 3 4
*/

#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
	for(int x: v){
		cout << x << " ";
	}
	cout << endl;
}

int main(){
	map<pair<string, string>, vector<int>> m;

	int t;
	cin >> t;

	while(t--){
		string fn, ln;
		int n;
		cin >> ln >> fn >> n;

		/* adding data into complex map */
		for(int i=0; i < n; ++i){
			int x;
			cin >> x;
			m[{fn, ln}].push_back(x);
		}

		/* printing data */
		for(auto &it: m){
			cout << (it.first).first << " " << (it.first).second << ": ";
			printVector(it.second);
		}

		m.clear();
	}
}
