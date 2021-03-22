/*Encrypting data with add in 'N' to the aplpha*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "All-convoYs-9-be:Alert1.";
    int n = 4;
    // cin >> str >> n;

    for(char c: str){
        // %26 for rouding the number around the character like 'A', 'a' or '0'
        if(c >= 'A' && c <= 'Z'){
            c = 'A' + (c - 'A' + n) % 26;
        }
        else if(c >= 'a' && c <= 'z'){
            c = 'a' + (c - 'a' + n) % 26;

        }else if(c >= '0' && c <= '9'){
            c = '0' + (c - '0' + n ) % 10;
        }

        cout << c;
    }
}
