#include <iostream>
using namespace std;

int main(){
    int i = 10;
    int &j = i;

    j = 0;

    cout << "i: " << i;

    return 0;
}