#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    int main_arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter";
        int s;
        cin >> s;
        int arr[s];

        for(int j=0; j<s; j++){
            cin >> arr[j];
        }

        // main_arr[i] = arr;
    }

    for(int i=0; i<n; i++){
        cout << main_arr[i];
    }
    return 0;
}