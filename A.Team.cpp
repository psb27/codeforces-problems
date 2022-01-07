// A. Team

#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;


void solve() {

	ll n;
	cin >> n;

	int count = 0;

	while(n--){

		ll arr[3];

		for(ll i=0; i<3; i++){
			cin >> arr[i];
		}

		ll count1 = 0;

		for(ll i=0; i<3; i++){

			if(arr[i] == 1){
				count1++;
			}
		}

		if(count1 >= 2)
			count++;

	}

	cout << count << endl;
	


}

int main(){


	//int t;
	//cin >> t;

	//while(t--) {

		solve();
	//}

	return 0;
}