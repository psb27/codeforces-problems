// B. Make AP
// Problem 1624B

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

	int a, b, c;
	cin >> a >> b >> c;

	int d1 = b-a;
	int d2 = c-b;
	int d3 = c-a;

	if(d1 == d2){
		cout << "Yes" << endl;
		return;
	}

	int res = b-d2; // if a is changing
	if(res%a == 0 && (res/a) > 0){
		cout << "Yes" << endl;
		return;
	}

	res = d1+b; // if c is changing
	if(res%c == 0 && (res/c) > 0){
		cout << "Yes" << endl;
		return;
	}

	if(d3%2 == 0){
		res = a+d3/2; // if b is changing
		if(res%b == 0 && (res/b) > 0){
			cout << "Yes" << endl;
			return;
		}

	}

	cout << "No" << endl;

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