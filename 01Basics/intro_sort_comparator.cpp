/* INTRO-SORT with Comparator function (custom behaviour) */

#include <bits/stdc++.h>
using namespace std;


void printVector(vector<pair<int, int>> arr){
	for(auto x: arr)
		cout << x.first << " " << x.second << endl;
}


// bool comparator(pair<int, int> a, pair<int, int> b){
// 	if(a.first != b.first){
// 		if(a.first > b.first) return false;
// 		return true;
// 	}else{
// 		if(a.second < b.second) return false;
// 	 	return true;
// 	}
// }


bool comparator(pair<int, int> a, pair<int, int> b){
	if(a.first != b.first)
		return a.first < b.first;
	return a.second < b.second;
}



int main(){
	int n;
	cin >> n;
	
	vector<pair<int, int>> arr(n);

	for(int i = 0; i < n; ++i)
		cin >> arr[i].first >> arr[i].second;

	// sort(arr, arr + n);		// 0th address, end address + 1
	sort(arr.begin(), arr.end(), comparator);	// in case of vector

	// printArray(arr, n);
	printVector(arr);
}
