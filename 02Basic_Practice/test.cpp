#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> vec;
    string data = "";

	for(int i=0; i< str.size(); i++){
        // cout << str[i] << endl;
        if(str[i] != ','){
            data += str[i];
        }else{
            cout << data << " ";
            vec.push_back(str[i]);
            data = "";
        }
    }
    return vec;
}

int main() {
    string str;
    cin >> str;

    // int integers = parseInts(str);
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}