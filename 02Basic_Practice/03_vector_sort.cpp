/* Sort Vector
Sample Input
5
1 6 10 8 4

Sample Output
1 4 6 8 10
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x;
    vector<int> arr;
    cin >> n;
    
    for(int i; i<n; i++){
        cin >> x;
        arr.push_back(x);
    }
    
    // cout << "size " << arr.size();
    sort(arr.begin(), arr.end());
    
    for(int x: arr) cout << x << " ";
    return 0;
}
