// B. Balanced Array - 1343B Problem code

// A. Petya and Strings

#include<bits/stdc++.h>
#define ll long long 
#define endl "\n"
using namespace std;


void solve() {

	ll n;
	cin >> n;

	n /= 2;

	if(n & 1){
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;

		for(ll i = 1; i <= n; i++){

			cout << i*2 << " ";
		}

		for(ll i = 1; i < n; i++){
			cout << i * 2 - 1 << " ";
		}


		cout << 3 * n-1 << endl;
	}


}

int main(){


	int t;
	cin >> t;

	while(t--) {

		solve();
	}

	return 0;
}