#include <bits/stdc++.h>
using namespace std;


int main(){
    int n = 7;
    // cin >> n;
    vector<int> vec{6, 4, 3, 9, 6, 7, 8};

    // for(int i = 0; i < n; ++i)
    //     cin >> vec[i];

    /*
        in case of vector min_element and max_element returns iterator
        in case of array min_element and max_element returns pointer
        
    */

    int min = *min_element(vec.begin(), vec.end());
    cout << "Min Element: " << min << endl;

    int max = *max_element(vec.begin(), vec.end());
    cout << "Max Element: " << max << endl;

    // accumulate(start, end, initiale_value_of_sum)
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "Sum: " << sum << endl;

    // count(start, end, element)
    int ct = count(vec.begin(), vec.end(), 6);
    cout << "Count: " << ct << endl;

    auto it = find(vec.begin(), vec.end(), 9);
    if(it != vec.end())
        cout << "Element: " << *it << endl;
    else
        cout << "Element not found" << endl;

    reverse(vec.begin(), vec.end());
    for(int i: vec)
        cout << i << " ";
    cout << endl;

    string s = "VINAY";
    reverse(s.begin(), s.end());
    cout << s << endl;
}
