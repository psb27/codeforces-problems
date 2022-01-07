// A. Soldier and Bananas  Problem - 546A

#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;


void solve() {

	int k,n,w;
	cin >> k >> n >> w;

	int total_cost = 0;

	for(int i = 1; i <= w; i++){

		int banana_cost = i*k;
		total_cost += banana_cost;
	}


	if(total_cost < n)
		cout << 0 << endl;
	else
		cout << (total_cost - n) << endl;


	

}

int main(){


	solve();
	

	return 0;
}