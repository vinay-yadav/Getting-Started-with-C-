#include <bits/stdc++.h>
using namespace std;

class Box{
    double breadth = 10;

    public:
        double length;
        double height;

        /*setting constructor*/
        // Box(double len, double hei){
        //     length = len;
        //     height = hei;
        // }

        /*another way of setting constructor*/
        Box(double len, double hei): length(len), height(hei){}

        // Note: both ways are equivalent

        /*class member function*/
        double getVolume(void){
            return length * breadth * height;
        }

};


int main(){
    int l, b, h;
    cin >> l >> b >> h;

    Box box1(l, h);

    cout << box1.getVolume();
}

