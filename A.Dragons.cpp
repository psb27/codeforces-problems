// A. Dragons
// Problem Tag - 230A

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

	int s,n;
	cin >> s >> n;

	pair<int, int> arr[n];

	bool flag = true;

	for(int i=0; i<n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	sort(arr, arr+n);

	

	for(int i=0; i<n; i++){

		if(s <= arr[i].first){
			flag = false;
			break;
		}
		
		s += arr[i].second;
	}

	if(flag) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
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