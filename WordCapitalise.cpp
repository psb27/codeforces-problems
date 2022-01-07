#include<bits/stdc++.h>
using namespace std;

int main(){


	string s;
	cin >> s;

	char c = s.at(0);

	c = toupper(c);

	s[0] = c;

	cout << s << "\n";

	return 0;
}