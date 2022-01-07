// A. Boy or Girl Problem - 236A



#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;


void solve() {

	string s;
	cin >> s;

	set<char>st;

	for(int i=0; i<s.size(); i++){

		st.insert(s[i]);
	}

	if(st.size() % 2 != 0){
		cout << "IGNORE HIM!" << endl;
	}
	else {
		cout << "CHAT WITH HER!" << endl;
	}

	


}

int main(){


	solve();
	

	return 0;
}