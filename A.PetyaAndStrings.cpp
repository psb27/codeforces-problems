// A. Petya and Strings

#include<bits/stdc++.h>
#define ll long long 
#define endl "\n"
using namespace std;


void solve() {

	string first, second;
	cin >> first >> second;

	for(int i=0; i<first.size(); i++){
		first[i] = tolower(first[i]);
	}
	

	for(int i=0; i<second.size(); i++){
		second[i] = tolower(second[i]);
	}



	sort(first.begin(), first.end());
	sort(second.begin(), second.end());

	if(first < second) {
      cout << -1 << endl;
  }
  else if(first > second){
      cout << 1 << endl;
  }
  else {
      cout << 0 << endl;
  }


}

int main(){


	//int t;
	//cin >> t;

	//while(t--) {

		solve();
	//}

	return 0;
}