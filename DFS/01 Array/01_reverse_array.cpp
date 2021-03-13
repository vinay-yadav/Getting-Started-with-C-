/*
Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/

#include <iostream>
using namespace std;

int main(){
    // int arr[6] = {1, 2, 3, 4, 5, 6};
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int start = 0, end = sizeof(arr)/sizeof(arr[0])-1;
    
    cout << "Size: " << end+1 << endl;

    cout << "Befor: ";
    for(int i=0; i <= end; i++) cout << arr[i] << " ";

    int temp;
    // Looping till half way as the exchanging the elements left to right and vice-versa
    for(int i=0; i <= end/2; i++){
        temp = arr[i];
        arr[i] = arr[end-i];
        arr[end-i] = temp;
    }

    cout << endl << "After: ";
    for(int i=0; i <= end; i++) cout << arr[i] << " ";

    return 0;
}