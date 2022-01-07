// A. Chat Room Problem - 58A


#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;


void solve() {

	string s;
	cin >> s;

	string ans = "hello";

	int count = 0;
	int k = 0;
	
	for(int i=0; i<s.length(); i++){

		if(s[i] == ans[k]){
			k++;
			count++;

			if(count == 5){
				break;
			}

		}


	}

	if(count == 5)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;

	
	


}

int main(){


	//int t;
	//cin >> t;

	//while(t--) {

		solve();
	//}

	return 0;
}