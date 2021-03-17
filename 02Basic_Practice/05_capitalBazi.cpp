/*Takes sentence and split it with ' ' and CAPITALIZE the words*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, temp;

    // Takes a whole line as an input
    getline(cin, str);
    
    for(int i=0; i<str.size(); i++){
        if(str[i] != ' '){
            // calculating the ASCII difference and converting to uppercase letter
            cout << (char) (str[i]-32);
        }
        else{
            cout << endl;
        }
    }
}