#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    char c[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> c[i][j];
        }
    }
    int min = 5;
    for(int i = 0; i < 5; i++){
        int r = 5;
        for(int j = 0; j < 5; j++){
            if(c[i][j] == 'o') r--;
        }
        if(r < min) min = r;
    }

    for(int j = 0; j < 5; j++){
        int r = 5;
        for(int i = 0; i < 5; i++){
            if(c[i][j] == 'o') r--;
        }
        if(r < min) min = r;
    }

    int r1=5, r2=5;
    for(int i = 0; i < 5; i++){
        if(c[i][i] == 'o') r1--;
        if(c[i][5-i] == 'o') r2--;
    }
    if(r1 < min) min = r1;
    if(r2 < min) min = r2;

    cout << min << endl;
	return 0;
}
