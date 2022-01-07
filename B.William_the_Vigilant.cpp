#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
typedef long double ld;
double eps = 1e-12;
#define forn(i,n) for(ll i = 0; i < n; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define endl "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

bool isABC(int i, string& s){

   if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c')
      return 1;
   return 0;
}
 

void solve(){

   ll n, q;
   cin >> n >> q;

   string s;

   cin >> s;

   ll count = 0;

   forn(i, n-2){

      if(isABC(i, s)){
         count++;
         i += 2;
      }
   }

   while(q--){

      ll pos; char c;
      cin >> pos >> c;

      pos--;

      for(int i = max((ll)0, pos-2); i <= min(pos, n-3); i++){

         if(isABC(i, s))
            count--;
      }

      s[pos] = c;

      for(int i = max((ll)0, pos-2); i <= min(pos, n-3); i++){

         if(isABC(i, s))
            count++;
      }

      cout << count << endl;


   }



  
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("inputf.in", "r", stdin);
freopen("outputf.in", "w", stdout);
#endif

 fast_cin();
 
      solve();
    
 return 0;
}