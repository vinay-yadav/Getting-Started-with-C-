/*Friend function has all rights to access private and protected members of a class friends with*/

#include <bits/stdc++.h>
using namespace std;

class Box{
    private:
        int length;
        int height;

    public:
        Box(int len, int hgt): length(len), height(hgt){}

        // friend function declaration
        friend void printArguments(Box box);       

};


// friend function definition
void printArguments(Box box){
    cout << "length: " << box.length << endl;
    cout << "height: " << box.height;
}


int main(){
    int l, h;
    cin >> l >> h;

    Box box1(l, h);

    printArguments(box1);
}

