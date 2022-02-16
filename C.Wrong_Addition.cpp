// C. Wrong Addition
// Problem Tag - 1619C

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;
double eps = 1e-12;
#define forn(i, n) for(int i = 0; i < n; i++)
#define rforn(i, n) for (int i = n-1; i >= 0; i--)
#define endl "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define cube(a) (a) * (a) (a)
#define SQ(a) (a)*(a)

ll MOD = 998244353;

using namespace std;

void solve(){

	ll a, s;
	cin >> a >> s;

	vector<ll>b;

	while(s) {
		int x = a % 10;
		int y = s % 10;

		if(x <= y) b.emplace_back(y-x);
		else {
			s /= 10;
			y += 10* (s%10);

			if(x < y && y >= 10 && y <= 19)
				b.emplace_back(y-x);
			else{
				cout << -1 << endl;
			    return;
			}

		}

		a /= 10;
		s /= 10;
	}

	if(a)
		cout << -1 << endl;
	else {
		while(b.back() == 0){
			b.pop_back();
		}

		for(int i=b.size()-1; i>=0; i--) 
			cout << b[i];
		cout << endl;
	}

}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("inputf.in", "r", stdin);
		freopen("outputf.in", "w", stdout);
	#endif

	fast_cin();

	int testcases;
	cin >> testcases;
	while(testcases--){

		solve();
	}
	return 0;
}