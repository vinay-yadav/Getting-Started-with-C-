/* You will be given an array of  integers and you have to print the integers in the reverse order.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int array_size;
    cin >> array_size;
    
    int arr[array_size];
    
    for(int i=0; i<array_size; i++){
        cin >> arr[i];
    }
    
    for(int i=array_size - 1; i>=0; i--){
        cout << arr[i] << ' ';
    }

    return 0;
}


/* Another solution using dynamically allocated memory */
// int main() {
//     int N,i=0;
//     std::cin>>N;
//     int *A = new int[N];
//     while(std::cin>>A[i++]);
//     while(std::cout<<A[--N]<<' ' && N);
//     delete[] A;
//     return 0;
// }
