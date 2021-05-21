#include <bits/stdc++.h>
using namespace std;


int main(){
    // lambda function
    // cout << [](int x){return x+2;}(2) << endl;    
    // cout << [](int x, int y){return x+y;}(2, 5) << endl;  

    // assigning lambda function
    auto sum = [](int x, int y){return x+y;};
    cout << sum(2, 8);  
}
