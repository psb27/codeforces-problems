// A. Twins

#include<bits/stdc++.h>
#define ll long long 
#define endl "\n"
using namespace std;


void solve() {

	int n;
	cin >> n; int sum = 0;

	std::vector<int> arr(n);

	for (auto &x : arr)
	{
		cin >> x;
		sum += x;
	}

	int half = sum / 2;

	sort(arr.rbegin(), arr.rend());

	int sumCoins = 0, countCoins = 0;

	for (auto x : arr)
	{
		sumCoins += x;
		countCoins ++;

		if(sumCoins > half)
			break;

	}

	cout << countCoins << endl;



	


}

int main(){


	//int t;
	//cin >> t;

	//while(t--) {

		solve();
	//}

	return 0;
}