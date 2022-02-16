// A. Ancient Civilization
// Problem Tag - 1625A

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
 	

 	int n, l;
 	cin >> n >> l;

 	vector<int> a(n);

 	for(int i=0; i<n; i++){
 		cin >> a[i];
 	}

 	vector<int>pos(32, 0);

 	for(int x: a){
 		for(int j=0; j<l; j++){

 			if(x & (1<<j)) pos[j]++;
 		}
 	}

 	int ans = 0;

 	for(int i=0; i<l; i++){
 		int count1 = pos[i];
 		int count0 = n - pos[i];

 		if(count1 > count0)
 			ans += (1 << i);
 	}

 	cout << ans << endl;
 
 
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