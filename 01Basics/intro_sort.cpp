/*
INTRO-SORT [mixture of quick sort, heap sort and insertion sort]
	inbuilt sorting function in STL
	worst-case O(nlogn)
*/

#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
	for(int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << endl;
}


void printVector(vector<int> arr){
	for(int x: arr)
		cout << x << " ";
	cout << endl;
}


int main(){
	int n;
	cin >> n;
	// int arr[n];
	vector<int> arr(n);

	for(int i = 0; i < n; ++i)
		cin >> arr[i];

	// sort(arr, arr + n);		// 0th address, end address + 1
	sort(arr.begin(), arr.end());	// in case of vector

	// printArray(arr, n);
	printVector(arr);
}
