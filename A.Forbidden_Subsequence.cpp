// A. Forbidden Subsequence
// Problem - 761A

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define endl "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){

    string s; cin >> s;
    string t; cin >> t;

    sort(all(s));
    
    int count_a = 0, count_b = 0, count_c = 0;
    int n = s.size();
    forn(i, n){
        if(s[i] == 'a'){
            count_a++;
        }
        if(s[i] == 'b'){
            count_b++;
        }
        if(s[i] == 'c'){
            count_c++;
        }
    }

    if(count_a == 0 || count_b == 0 || count_c == 0 || t != "abc"){
        cout << s << endl;
    }
    else {

        int sum_index = count_a + count_b + count_c;

        while(count_a--)
            cout << 'a';
        while(count_c--)
            cout << 'c' ;
        while(count_b--)
            cout << 'b'; 
        for(int i = sum_index; i<n; i++){
            cout << s[i];
        }

        cout << endl;
    }
    
    
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
 while(t--) {
     solve();
 }
 return 0;
}