// A. Soft Drinking
// Problem Tag - 151A

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define rep(i, s, e) for(ll i = s; i < e; i++)
#define repb(i, s, e) for(ll i=s; i>=e; i--)
#define endl "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define sq(a) (a)*(a)
#define cube(a) (a)*(a)*(a)


void solve() {

	int n, k, l, c, d, p, nl, np;

	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int total_drink = (k * l) / nl;

	int total_lime = c * d;

	int total_salt = p / np;

	int drinks = min(total_drink, total_lime);

	int ans = min(drinks, total_salt);

	cout << (ans / n) << endl;

}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fast_cin();

	solve();


	return 0;
}