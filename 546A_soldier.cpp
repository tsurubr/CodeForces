#include <bits/stdc++.h>
using namespace std;

int main(){
    int k = 0, n = 0, w = 0, div = 0;
	cin >> k >> n >> w;
	
    for(int i = 1; i <= w; i++){
        div += i * k;
    }
	
    if(div <= n){
        cout << 0;
    }else{
        cout << div - n;
    }
return 0;
}