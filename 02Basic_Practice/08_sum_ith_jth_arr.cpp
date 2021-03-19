#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[][4]){
	for(int i = 0; i < 4; i++){
		for(int j=0; j<4; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;	
	}
	cout << endl;	
}

int main(){
    int arr[4][4] = {{1,2,3,4}, {9,5,3,1}, {0,3,5,6}, {0,4,5,6}};
    int n = 1;

    print_array(arr);

    while(n--){
    	for(int i = 0; i < 4; i++){
    		int row = 0, col = 0;
			for(int j=0; j<4; j++){
				row += arr[i][j];
				col += arr[j][i];
			}

			cout << "ROW" << " " << i+1 << " ";
			if(row == col) cout << "=  ";
			else cout << "!= ";
			cout << "COL" << " " << i+1 << endl;
		}
    }
}

