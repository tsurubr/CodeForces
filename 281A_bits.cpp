#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int result = 0;
    
for(int i = 0; i < n; i++){
    string value;
    cin >> value[i];
    if(value[i] == 'x'){
        continue;
    }else if(value[i] == '+'){
        result++;
    }else if(value [i] == '-'){
        result--;
    }
}
    cout << result << endl;
    return 0;
}