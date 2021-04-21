/*
lower_bound returns the element if exists for next greater element
upper_bound return the next greater element

for array and vector: sorting is must
not for sets and maps

Time Complexity: O(logn)
Naive bounds for set and map uses O(n)
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

// For Vector
int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; ++i)
    	cin >> arr[i];

    sort(arr.begin(), arr.end());

    printVector(arr);

    auto it = lower_bound(arr.begin(), arr.end(), 26);
    if(it == arr.end())
    	cout << "Not found" << endl;
    else
    	cout << *it << endl;


    it = upper_bound(arr.begin(), arr.end(), 8);
    if(it == arr.end())
    	cout << "Not found" << endl;
    else
    	cout << *it << endl;

}


/* For Set
int main(){
    int n;
    cin >> n;

    set<int> s;

    while(n--){
    	int x;
    	cin >> x;
    	s.insert(x);
    }

    auto it = s.lower_bound(7);
    if(it == s.end())
    	cout << "Not found" << endl;
    else
    	cout << *it << endl;

    it = s.upper_bound(8);
    if(it == s.end())
    	cout << "Not found" << endl;
    else
    	cout << *it << endl;
}
*/

/* For Array
int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; ++i)
    	cin >> arr[i];

    sort(arr, arr + n);

    printArray(arr, n);

    int *ptr = lower_bound(arr, arr+n, 26);
    if(ptr == arr+n)
    	cout << "Not found" << endl;
    else
    	cout << *ptr << endl;


    ptr = upper_bound(arr, arr+n, 8);
    if(ptr == arr+n)
    	cout << "Not found" << endl;
    else
    	cout << *ptr << endl;

}
*/
