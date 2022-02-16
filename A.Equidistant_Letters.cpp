// A. Equidistant Letters
// Problem tag - 1626A

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

	string s;
	cin >> s;

	sort(s.begin(), s.end());

	cout << s << endl;


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