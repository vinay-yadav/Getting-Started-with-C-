#include <bits/stdc++.h>
using namespace std;

class Box{
    public:
        int length, breadth, height;

        Box(int length, int breadth, int height){
            (*this).length = length;
            (*this).breadth = breadth;
            this->height = height;
        }

        int volume(){
            return length * breadth * height;
        }

        int big(Box &obj){
            // return this->volume() > obj.volume();
            return (*this).volume() > obj.volume();
        }
};

int main(){
    Box b1(10, 20 , 30);
    Box b2(20, 10, 5);

    if(b1.big(b2))
        cout << "Box 1 is bigger" << endl;
    else
        cout << "Box 2 is bigger" << endl;
}