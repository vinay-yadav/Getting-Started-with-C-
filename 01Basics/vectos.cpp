#include <iostream>
#include <string>
#include <vector>
using namespace std;

string vector_display(vector<int> dynamic_array){
    string arr = "[";
    for(int x: dynamic_array){
        arr += to_string(x) + ", ";
    };
    arr += "]";
    return arr;
};

int main(){
    vector<int> list_n {1,2,3,4,5,6};

    cout << vector_display(list_n);
    return 0;
}

// int main() {
//     // Vector with 5 integers
//     // Default value of integers will be 0.
//     vector < string > listOfStr;

//     // push_back: insert elements at the end
//     listOfStr.push_back("first");
//     listOfStr.push_back("sec");
//     listOfStr.push_back("third");
//     listOfStr.push_back("fouth");
//     listOfStr.push_back("five");
//     listOfStr.push_back("six");

//     cout << listOfStr.operator[](4);
    
//     // To random access any vector use .operator[](index)
//     // for (int i = 0; i < listOfStr.size(); i++)
//     //     cout << listOfStr.operator[](i) << " ";

//     // for (string x: listOfStr)
//     //     cout << x << std::endl;
// }