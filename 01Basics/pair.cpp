#include <bits/stdc++.h>
using namespace std;

int main(){
    // declaraltion
    pair<int, string> p;

    // insertion 1
    p = make_pair(1, "abc");

    // insertion 2
    p = {2, "def"};

    // print
    cout << p.first << " " << p.second;

    return 0;
}