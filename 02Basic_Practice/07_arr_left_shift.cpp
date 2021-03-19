#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
    int n = 5, d = 4, arr[] = {1,2,3,4,5};
    print_array(arr, n);

    while(d--){
		for (int i = 0; i < n-1; i++){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}

    print_array(arr, n);
}

