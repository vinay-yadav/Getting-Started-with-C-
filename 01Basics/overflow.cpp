// Note: double and float both had precision error i.e. they do not hold the accurate value

/*
data type ranges:
10^-9 < int < 10^9
10^-12 < long int < 10^12
10^-18 < long long int < 10^18
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int a = 100000;
    int b = 100000;
    long int c;

    // c will not store correct calculation as data is calculated in interger and range exceeded
    // c = a*b;


    // Solution
    c = a * 1LL * b;    // here '1LL' act as long long int so calculation is calculated in long long int
    cout << c;
}

/*
// why not use double
// accuracy of double is low
int main(){
    double a = 100000;
    double b = 100000;
    double c = a*b;

    cout << c << endl;

    // fixed keyword is used to convert scientific notation to numeric notation
    cout << fixed << c << endl;

    // setprecision removed extra zeros
    cout << fixed << setprecision(0) << c << endl;
}
*/

