/*Takes sentence and split it with ' ' and CAPITALIZE the words*/

#include <bits/stdc++.h>
using namespace std;

/*
// Approach one: taking input as a sentence
int main(){
    string str, temp;

    // Takes a whole line as an input
    getline(cin, str);
    
    for(int i=0; i<str.size(); i++){
        if(str[i] != ' '){
            // calculating the ASCII difference and converting to uppercase letter
            // as ASCII of ('c' - 'a' = 'C' - 'A')
            cout << (char) ((str[i] - 'a') + 'A');
        }
        else{
            cout << endl;
        }
    }
}
*/

// Approach two: using cin
int main(){
    while(true){
        string str;
        cin >> str;

        if(str.size() == 0) break;

        for(int i=0; i<str.size(); i++)
            cout << (char) ((str[i] - 'a') + 'A');

        cout << endl;
    }
}