/* Finding max and min element in the array */

#include <iostream>
using namespace std;

int main(){
    // int arr[6] = {1, 2, 3, 4, 5, 6};
    int arr[10];
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    // Generating random numbers for array
    for(int i=0; i < arr_size; i++)
      arr[i] = rand()%100;

    for(int i=0; i < arr_size; i++) cout << arr[i] << " ";
    
    int min = arr[0], max = arr[0];

    for(int i=0; i < arr_size; i++){
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    cout << endl << "Min: " << min << endl << "Max: " << max;
    return 0;
}
