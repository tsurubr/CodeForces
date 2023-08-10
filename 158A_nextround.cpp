#include <bits/stdc++.h>
using namespace std;

int main(void){
int n = 0;
int k = 0;
int a = 0;
int result = 0;
vector <int> numeros;

cin >> n >> k;

for (int i = 0; i < n; i++){ 
    cin >> a;
    numeros.push_back(a);
}
for (int i = 0; i < n; i++){ 
    if(numeros[i] >= numeros[k-1] && numeros[i] > 0){
        result++;
    }
}
cout << result << endl;
return 0;
}