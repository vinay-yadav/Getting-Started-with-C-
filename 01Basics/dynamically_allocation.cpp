#include <bits/stdc++.h>
using namespace std;

int main(){
    // initialising the pointer
    int *p;

    // dynamically allocating the memory of 4 bytes
    p = new int;

    // adding value of 20 @address of p
    *p = 20;

    cout << "Address: " << p << " @ value: " << *p << endl;
    delete p;

    // initialsing array dynamically
    p = new int[20];

    cout << p << " " << p[0];

    // deleting array
    delete[] p;
}