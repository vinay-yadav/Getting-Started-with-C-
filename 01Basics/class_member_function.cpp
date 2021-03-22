#include <bits/stdc++.h>
using namespace std;

class Box{
    public:
        double length;
        double breadth;
        double height;

    /*class member function*/
    // double getVolume(void){
    //     return length * breadth * height;
    // }

    /*class member function declaration for oustide defintion*/
    double getVolume(void);

};

/*class member function definition oustside the class*/
double Box::getVolume(void){
    return length * breadth * height;
}

int main(){
    int l, b, h;
    cin >> l >> b >> h;

    Box box1;
    box1.length = l;
    box1.breadth = b;
    box1.height = h;

    cout << box1.getVolume();
}

