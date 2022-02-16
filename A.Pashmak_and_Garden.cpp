// A. Pashmak and Garden
// Problem tag 459A

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

	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	if(x1 != x2 && y1 != y2 && abs(x1-x2) != abs(y1-y2)){
		cout << -1 << endl;
	}
	else if(x1 == x2){
		cout << x1 + abs(y1-y2) << " " << y1 << " " << x2 + abs(y1-y2) << " " << y2 << endl;
	}
	else if(y1 == y2){
		cout << x1 << " " << y1 + abs(x1-x2) << " " << x2 << " " << y2 + abs(x1-x2) << endl;

	}
	else {
		cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
	}


}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("inputf.in", "r", stdin);
		freopen("outputf.in", "w", stdout);
	#endif

	fast_cin();

	

	solve();
	
	return 0;
}