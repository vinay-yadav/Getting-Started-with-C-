#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector
using namespace std;

int main(){
    int arr[] = {9,8,4,7,6,6,6,6,3,2,4};
    vector<int> v(arr, arr+10);

    sort(v.begin(), v.end());

    for(int x: v) cout << x << " "; //2 3 4 4 5 5 6 7 8 9
    cout << endl;

    vector<int>::iterator low, up;
    low = lower_bound (v.begin(), v.end(), 5); 
    up = upper_bound (v.begin(), v.end(), 5);

    cout << "lower_bound at position " << (low- v.begin()) << '\n';
    cout << "upper_bound at position " << (up - v.begin()) << '\n';
    return 0;
}