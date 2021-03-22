#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    bool flag = true;
    for(int i = 0; i < str.size()/2; ++i){
        if(str[i] != str[str.size()-i-1]){
            flag = false;
            break;
        }
    }

    cout << ((flag)?"YES":"NO");
}
