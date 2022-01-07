// A. Beautiful Matrix  Problem - 263A


#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;


void solve() {

	int n;
	cin >> n;

	string s;
	cin >> s;

	int count = 0;

	int start = 0;
	int end = start + 1;

	while(end < s.size()){

		if(s[start] == s[end]){
			count++;
		}
		
		start++;
		end++;
		
	}

	cout << count << endl;
	
	


}

int main(){


	solve();
	

	return 0;
}