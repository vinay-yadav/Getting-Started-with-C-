/*
    Property: (a + b) % k = (a%k + b%k) % k
*/

#include<bits/stdc++.h>
#define int long long int
using namespace std;

int power(int a, int b, int k)
{
    if(b == 0) return 1;
    int ans = 1;
    // int val = a;
    while(b)
    {
        if(b%2)
        {
            ans *= a;
            ans %= k;
        }
        a *= a;
        a %= k;
        b /= 2;
    }
    return ans;
}

void solve(){
    int m = 5, k = 12;
    // cin >> m >> k;

    string s = "52436";
    // cin >> s;

    int mod_val = 0;
    for(int i = 0 ; i < m ; i++)
    {
        int digit = s[i] - '0';
        mod_val = (mod_val + (digit*power(10, m - i - 1, k) %k)) %k;
    }

    int prev = 0;
    int answer = mod_val;
    for(int i = 0 ; i < m ; i++)
    {
        int digit = s[i] - '0';
        mod_val = (mod_val - (digit*power(10, m - i - 1, k))%k + k)%k;
        answer = max(answer, (prev + mod_val)%k);
        prev = (prev + (digit*power(10, m - i - 2, k))%k)%k;
    }

    cout << answer << endl;
}

signed main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}