#include <bits/stdc++.h>
using namespace std;

/*
to convert char number into number subtract
char number with ASCII value of '0'
*/

int main(){
    int loop;
    cin >> loop;

    while(loop--){
    	int num;
    	cin >> num;

    	string binary;
    	cin >> binary;

    	long long actual = 0;
    	long long power2 = 1;

    	for(int i=binary.size()-1; i>=0; i--){
    		int temp = (binary[i]-'0');
    		actual = actual + (temp * power2);
    		power2 = power2 * 2;
    	}

    	cout << actual << endl;
    }   
}