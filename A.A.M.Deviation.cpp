// A. A.M. Deviation


#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;


void solve() {

	ll a , b, c;

	cin >> a >> b >> c;

	ll min_deviation = (a+c - 2*b);

	if(min_deviation % 3 == 0){
		cout << 0 << endl;
	}
	else {
		cout << 1 << endl;
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