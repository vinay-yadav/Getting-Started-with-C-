/*
Least significant digit
Checks if last digit for 2,3 or 5
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
	cin >> testcase;
	while(testcase--){
		int num;
		cin >> num;

		long long temp = 1;
		while(num--){
			long long n;
			cin >> n;
			temp = temp * n;
		}

		if(temp%10 == 2 || temp%10 == 3 || temp%10 == 5)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

}