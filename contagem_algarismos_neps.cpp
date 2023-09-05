#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, nume[10] = {};
	string num;
	cin >> n;
	
	while(n--){
	    cin >> num;
	    for(int i = 0; i < num.size(); i++){
	        switch(num[i]){
	            case '0': nume[0]++; break;
	            case '1': nume[1]++; break;
	            case '2': nume[2]++; break;
	            case '3': nume[3]++; break;
	            case '4': nume[4]++; break;
	            case '5': nume[5]++; break;
	            case '6': nume[6]++; break;
	            case '7': nume[7]++; break;
	            case '8': nume[8]++; break;
	            case '9': nume[9]++; break;
	        }
	    }
	}
	for(int i = 0; i < 10; i++){
	    cout << i << " - " << nume[i] << endl;
	}
    return 0;
}
