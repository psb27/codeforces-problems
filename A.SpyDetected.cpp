
// A. Spy Datected!

#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	cin >> n; 

	int arr[n];

	for(int i=0; i<n; i++){

		cin >> arr[i];
	}

	unordered_map<int,int>mp;

	for(int i=0; i<n; i++) {

		mp[arr[i]]++;
	}

	int element = 0;

	for(int i=0; i<n; i++){

		if(mp[arr[i]] == 1){
			element = arr[i];
		}
	}

	for(int i=0; i<n; i++){

		if(arr[i] == element){
			cout << i+1 << "\n";
		}
	}

	


}

int main(){

	int t;
	cin >> t;

	while(t--){

		solve();
	}

	return 0;
}