// A. String Task Problem 118A

#include<bits/stdc++.h>
#define ll long long 
#define endl "\n"
using namespace std;


void solve() {

	string s, ans;
	cin >> s;


	for(int i=0; i<s.length(); i++){

		if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'
		&& s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'Y'){
			
			ans = ans + "."; // adding . before consonents

			ans = ans + (char)tolower(s[i]); // adding all the consonents and converting them into lowercase
		}

	}

	cout << ans << endl;

	
	


}

int main(){


	//int t;
	//cin >> t;

	//while(t--) {

		solve();
	//}

	return 0;
}