// B. Queue at the School Problem - 266B

#include<bits/stdc++.h>
#define ll long long 
#define endl "\n"
using namespace std;


void solve() {

	ll n , t;

	cin >> n >> t;

	string s;
	cin >> s;

	int m = s.size();

	for (ll i = 1; i <= t; ++i)
	{
		

		for (ll j = 0; j < m; ++j)
		{
			if(s[j] == 'B' && s[j+1] == 'G'){

				swap(s[j], s[j+1]);

				j++;
			}
		}
	}

	cout << s << endl;

}

int main(){

	solve();
	

	return 0;
}