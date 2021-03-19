#include <bits/stdc++.h>
using namespace std;

int lower_to_upper(char c){
	return c - 'a' + 'A';

}

int upper_to_lower(char c){
	return c - 'A' + 'a';
}

int main(){
    string str;
    cin >> str;

    int num = 0;
    for(int i = 0; i < str.size(); i++){
    	if(str[i] >= 'a' && str[i] <= 'z'){
    		str[i] = (char) lower_to_upper(str[i]);
    		num += str[i];
    	}
    	else if(str[i] >= 'A' && str[i] <= 'Z'){
    		str[i] = (char) upper_to_lower(str[i]);
    		num -= str[i];
    	}

    }

    for(int i = 0; i < str.size(); i++){
    	cout << str[i] << " " << (int) str[i] << endl;
    }

    cout << endl << num << endl;

    if(num < 0) num = num * -1;

    bool check = true;
    for(int i = 2; i < num; i++){
    	if(num % i == 0){
    		cout << "0" << endl;
    		check = false;
    		break;
    	}
    }

    if(check) cout << "1";
}

