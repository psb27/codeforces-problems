// A. Olesya and Rodion

#include<bits/stdc++.h>
using namespace std;


void solve() {


	int n, t;
	cin >> n >> t;
	if(n == 1 && t == 10) {
		cout << -1 << "\n";
		return;
	}
 
	cout << t;
	int zero = (t==10?n-2:n-1);
	for(int i = 0; i <zero;i++) cout << 0;
 
	cout << "\n";
}

int main(){


	//int t;
	//cin >> t;

	//while(t--) {

		solve();
	//}

	return 0;
}