#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        int k, m, n;
        cin >> k >> m >> n;
        // k = 3, m = 10, n = 2;
        int steps = 0;

        while(k != m){
            if(k < m){
                k = k * n;
                steps++;
            }else if(k - m >= 2){
                k = k - 2;
                steps;
            }else{
                k = k - 1;
                steps++;
            }
        }

        cout << steps << " " << k << endl;
    }
}
