#include <bits/stdc++.h>
using namespace std;

class Box{
    public:
        Box(){  // Constructor declaration
            cout << "Constructor all set!!" << endl;
        }

        ~Box(){  // Destructor declaration
            cout << "Object going to delete!!" << endl;
        }

};


int main(){
    Box box1;

    cout << "stuff before program ends!!" << endl;
}

