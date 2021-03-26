#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
	int i = low - 1, pivot = arr[high];

	for(int j = low; j < high; ++j){
		if(arr[j] <= pivot){
			i++;
			swap(arr[i], arr[j]);
		}
	}

	swap(arr[i+1], arr[high]);

	return i+1;
}

void quickSort(int arr[], int low, int high){
	if(low <  high){
		int pi = partition(arr, low, high);


		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
	}
}

void printList(int arr[], int size){
	for(int i=0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int arr[] = {10, 80, 30, 90, 40, 50, 70};
	int size = sizeof(arr)/sizeof(arr[0]);

	cout << "Before: ";
	printList(arr, size);

	quickSort(arr, 0, size-1);

	cout << "After: ";
	printList(arr, size);

}