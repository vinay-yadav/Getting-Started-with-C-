#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;

    q.push("abc");
    q.push("cde");
    q.push("xyz");

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}
