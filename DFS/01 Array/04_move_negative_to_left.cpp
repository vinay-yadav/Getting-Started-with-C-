/*
Move all negative numbers to beginning and positive to end with constant extra space
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5

approach: one pointer technique.
*/

#include <bits/stdc++.h>
using namespace std;

void partition(int arr[], int size){
	int j = 0;

	for(int i=0; i < size; ++i){
		if(arr[i] < 0){
			if(i != j)
				swap(arr[i], arr[j]);
			j++;
		}
	}
}


void printList(int arr[], int size){
	for(int i=0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
	int size = sizeof(arr)/sizeof(arr[0]);

	cout << "Before: ";
	printList(arr, size);

	partition(arr, size);

	cout << "After: ";
	printList(arr, size);

}