#include <bits/stdc++.h>
using namespace std

int main(){
    int n = 0;
    cin >> n;
    int result = 0;
    
    for(int i = 0; i < n; i++){
        vector <string> value;
        if (value[1] || value[0] == '+'){
            result++;
        }
        else if(value [1] || value[2] == "-"){
            result++;
        }
    }
}