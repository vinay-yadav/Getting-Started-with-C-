#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> value;
    string temp = "";

    for(int i=0; i<=str.size(); i++){
        if(str[i] != ',') temp += str[i];
        else{
            value.push_back(stoi(temp));
            temp = "";
        }
    }
    value.push_back(stoi(temp));
    cout << endl << endl;
    return value;
}

int main() {
    string str;
    cin >> str;
    // str = "23,44,56";
    vector<int> integers = parseInts(str);

    for(int i: integers) cout << i << endl;
    
    return 0;
}