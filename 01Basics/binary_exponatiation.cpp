/*
2^12 = 4^6 = 16^3 = 16*16^2 = 16*256^1 = 16*256
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll binaryExponentiation(ll base, ll pow){
    // 2^12 -> num = 2, pow = 12
    ll ans = 1;

    while(pow > 0){
        // if pow is odd
        if(pow % 2){
            ans *= base;
        }

        base *= base;
        pow /= 2;
    }
    return ans;
}

int main(){
    ll n = 2;
    ll pow = 12;

    cout << n << "^" << pow <<": " << binaryExponentiation(n, pow);
}