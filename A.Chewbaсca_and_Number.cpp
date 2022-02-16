// A. Chewbaсca and Number
// Problem tag - 514A


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

	string s;
	cin >> s;

	int j = 1;

	int n = s.size();

	rep(i , 0, n) {

		if (s[0] == '9' && j == 1) {
			j++;
			continue;
		}

		if (s[i] - '0' <= 4) {
			continue;
		}

		int x = 9 - (s[i] - '0');
		s[i] = char(x) + '0';
	}

	cout << s << endl;

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