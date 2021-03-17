#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> record;
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int num, marks;
        string name;
        
        cin >> num >> name;
        
        if (num==1){
            cin >> num;
            record[name] += num;
        }else if(num==2){
            record[name] = 0;
        }else if(num==3){
            cout << record[name] << endl;
        }
    }
    
    return 0;
}