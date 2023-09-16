#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <char> win[5];
	
	for(char c = 'A'; c <= 'P'; c++){
		win[0].push_back(c);
	}
	
	for(int i = 1; i <= 4; i++){
		for(int j = 0; j < win[i-1].size(); j+=2){
			int m, n;
			cin >> m >> n;
			if(m>n) win[i].push_back(win[i-1][j]);
			else win[i].push_back(win[i-1][j+1]);
		}
	}
	cout << win[4][0];
	return 0;
}
