#include <bits/stdc++.h>
using namespace std;

void increment(int *x){
    (*x)++;
}

int main(){
    int x = 4;
    cout << x << endl;
    increment(&x);
    cout << x << endl;
}