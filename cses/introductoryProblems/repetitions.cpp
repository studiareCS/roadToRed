#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    string s; cin >> s;
    char c;
    int max = 1, rep = 1;
    c = s[0];

    for(int i = 1; i < s.length(); i++){
        if(c == s[i]){
            rep++;   
        }else{
            c = s[i];
            rep = 1;
        }
        if(rep > max) max = rep;
    }

    cout << max << endl;
	return 0;
}
