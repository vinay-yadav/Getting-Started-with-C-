/*Copy constructor is used to intialse a class object using another object data*/

#include <bits/stdc++.h>
using namespace std;

class Box{
    public:
        int length, breadth;

        Box(int length, int breadth){
            (*this).length = length;
            (*this).breadth = breadth;
        }

        Box(Box &obj){
            length = obj.length;
            breadth = obj.breadth;
        }
};

int main(){
    Box b1(80, 20);
    b1.length += 20;
    b1.breadth += 20;
    cout << "Box1: " << b1.length << " " << b1.breadth << endl;

    /*calling copy constructor*/
    // Box b2(b1);
    Box b2 = b1;
    cout << "Box2: " << b2.length << " " << b2.breadth << endl;
}