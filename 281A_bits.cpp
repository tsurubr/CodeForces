#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int result = 0;
    
for(int i = 0; i < n; i++){
    vector <string> value(3);
    cin >> value[i];
    if (value[i][1] == '+'){
        result++;
    }
    else if(value [i][1] == '-'){
        result--;
    }
}
    cout << result << endl;
    return 0;
}