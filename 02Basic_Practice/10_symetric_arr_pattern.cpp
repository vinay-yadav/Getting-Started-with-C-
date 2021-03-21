/*
How to check whether a logo is symmetric?
Align the center of logo with the origin of Cartesian plane. Now if the colored pixels of the logo are symmetric about both X-axis and Y-axis, then the logo is symmetric.

You are given a binary matrix of size N x N which represents the pixels of a logo.
1 indicates that the pixel is colored and 0 indicates no color.

For instance: Take a 5x5 matrix as follows:

01110
01010
10001
01010
01110
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n][n];

        for(int i = 0; i < n; ++i){
            string str;
            cin >> str;
            for(int j = 0; j < n; ++j){
                arr[i][j] = str[j] - '0';
            }
        }

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        bool flag = false;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                // cout << i << j << " " << n-i-1 << j << " " << i << n-j-1 << endl;
                if(arr[i][j] != arr[n-i-1][j] || arr[i][j] != arr[i][n-j-1]){
                    cout << "NO" << endl;
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            };
        }

        if(!flag) cout << "YES" << endl;
        cout << endl;
    }
}


/*
Test cases
5
2
11
11
4
0101
0110
0110
0101
4
1001
0000
0000
1001
5
01110
01010
10001
01010
01110
5
00100
01010
10001
01010
01110
*/
