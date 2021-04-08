/*
Testcases:
3
{[()]}
{[(])}
{{[[(())]]}}
*/


#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {
	{'[', -1}, {'(', -2}, {'{', -3},
	{']', 1}, {')', 2}, {'}', 3}
};

bool balancedString(string str){
	stack<char> balance;

	for(char x: str){
		if(symbols[x] < 0)
			balance.push(x);
		else{
			if(balance.empty()){
				return false;
			}

			char stack_element = balance.top();
			balance.pop();
			if((symbols[x] + symbols[stack_element]) != 0)
				return false;
		
		}
	}

	if(!balance.empty()) return false;

	return true;
}


int main(){
	int t;
	cin >> t;
	cin.ignore();

	while(t--){
		string para;
		getline(cin, para);

		if(balancedString(para))
			cout << "Balanced\n";
		else
			cout << "Unbalanced\n";
	}
}
