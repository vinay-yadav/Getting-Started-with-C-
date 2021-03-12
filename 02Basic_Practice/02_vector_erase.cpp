/*
>erase(int position):
Removes the element present at position.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)

>erase(int start,int end):
Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> elements;
    int n, x;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> x;
        elements.push_back(x);
    }
    
    x = 0;
    cout << "Eleminating single element" << endl;
    cin >> x;
    elements.erase(elements.begin()+x-1);
    
    x = 0;
    int y = 0;
    
    cout << "Eleminating range" << endl;
    cin >> x >> y;
    elements.erase(elements.begin()+x-1, elements.begin()+y-1);
    
    cout << elements.size() << endl;
    for(int i: elements) cout << i << " ";
    return 0;
}
