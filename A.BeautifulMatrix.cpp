// A. Beautiful Matrix  Problem - 263A


#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;


void solve() {

	int n = 5; int m = 5;

	int arr[n][m];

	for(int i=0; i<n; i++){

		for(int j=0; j<m; j++){
			cin >> arr[i][j];
		}
	}

	int r = 0, c = 0;

	for(int i=0; i<n; i++){

		for(int j=0; j<m; j++){
			
			if(arr[i][j] == 1){
				r = i;
				c = j;
				break;
			}
		}
	}

	int operation = abs(2-r) + abs(2-c);

	cout << operation << endl;

	


}

int main(){


	solve();
	

	return 0;
}