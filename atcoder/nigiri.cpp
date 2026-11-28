#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s; cin >> s;
	int oS = 0;
	for(char c: s) if(c == 'o') oS++;

	if(oS % 2 == 0) cout << "even\n";
	else cout << "odd\n";
	return 0;
}
