/*
    all_of  - returns true if condition matches for all
    none_of - returns true if none of condition matches for all
    any_of  - returns true if any of condition matches
*/

#include <bits/stdc++.h>
using namespace std;


// lambda function
// auto sum = [](int x, int y){return x+y;};
// cout << sum(2, 8); 


int main(){
    vector<int> v = {2, 3, 5};

    cout
        << "all_of: " 
        << all_of(v.begin(), v.end(), [](int x){return x > 0;}) 
        << endl ;

    cout 
        << "any_of: "
        << any_of(v.begin(), v.end(), [](int x){return x > 3;}) 
        << endl ;

    cout 
        << "none_of: "
        << none_of(v.begin(), v.end(), [](int x){return x > 0;}) 
        << endl ;
}
