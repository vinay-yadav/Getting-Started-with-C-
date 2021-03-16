/*
Sorting array of 0, 1 & 2
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort012_count(int arr[], int size){
    int i, zero = 0, one = 0, two = 0;

    for(i=0; i<size; i++){
        switch (arr[i]){
            case 0: zero++; break;
            case 1: one++; break;
            case 2: two++; break;
        }
    }

    // Updating counter
    i = 0;

    while(zero > 0){
        arr[i++] = 0;
        zero--;
    }

    while(one > 0){
        arr[i++] = 1;
        one--;
    }

    while(two > 0){
        arr[i++] = 2;
        two--;
    }
    
    for(int i=0; i<size; ++i) cout << arr[i] << " ";

}

void sort012_one_as_mid(int arr[], int size){
    int low = 0, mid = 0, high = size-1;

    while(mid <= high){
        switch (arr[mid]){
            case 0: swap(arr[mid], arr[low]); low++; mid++; break;
            case 1: mid++; break;
            case 2: swap(arr[high], arr[mid]); high--; break;
        }
    }

    for(int i=0; i<size; ++i) cout << arr[i] << " ";
}

int main(){
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};

    // sort012_count(arr, sizeof(arr)/sizeof(arr[0]));
    sort012_one_as_mid(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}