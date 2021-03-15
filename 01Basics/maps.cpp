#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void print_map(map<int, string> &m){
    cout << "Size: " << m.size() << endl;
    // another method
    // & used so that there should be no copy
    for(auto &pr: m) // Takes O(nlogn) as n elements + logn for individual
        cout << pr.first << " " << pr.second << endl;
}

int main(){
    // Declaration
    map<int, string> m;

    // Inserting data in maps
    m[2] = "def";   // Takes O(logn)
    m[1] = "abc";

    // other insertion method
    m.insert({3, "ghi"});

    // printing map elements
    // map<int, string>::iterator it;
    // for(it = m.begin(); it != m.end(); ++it){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // finding element
    // auto it = m.find(9); // O(logn) // Returns an iterator if element is there else returns m.end()

    // if(it == m.end()) cout << "No Value";
    // else cout << (*it).first << " " << (*it).second;

    // erasing element
    // m.erase(3); // O(logn)  

    // we can also delete using iterator
    // auto it = m.find(3);
    // m.erase(it);


    m.clear();
    print_map(m);


    return 0;
}