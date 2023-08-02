#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int result = 0;
    
for(int i = 0; i < n; i++){
    string value;
    cin >> value;
	
	for(int j = 0; j <=3; j++){
    	if(value[j] == '+'){
        	result++;
			break;
    	}else if(value [j] == '-'){
        	result--;
			break;
    	}
	}
}
    cout << result << endl;
    return 0;
}