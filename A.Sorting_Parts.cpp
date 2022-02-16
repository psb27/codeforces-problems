// A. Sorting Parts

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

	int n;
	cin >> n;

	std::vector<int> arr(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	vector<int>temp(n);

	for (int i = 0; i < n; i++) {
		temp[i] = arr[i];
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++) {
		if (arr[i] != temp[i]) {
			cout << "YES" << "\n";
			return;
		}
	}

	cout << "NO" << endl;
}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fast_cin();
	ll t;
	cin >> t;

	while (t--) {

		solve();
	}

	return 0;
}