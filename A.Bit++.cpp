// A. Bit++ Problem 282A

#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;


void solve() {

	int n;
	cin >> n;

	vector<string>v(n);

	for(int i=0; i<n; i++)
		cin >> v[i];

	cout << count(v.begin(), v.end(), "++X") + count(v.begin(), v.end(), "X++") - count(v.begin(), v.end(), "--X") - count(v.begin(), v.end(), "X--") << endl;


}

int main(){


		solve();
	
	return 0;
}