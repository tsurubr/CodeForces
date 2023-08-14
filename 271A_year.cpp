#include <bits/stdc++.h>
using namespace std;

int main(){
    int resultado = 0;
    int matriz[5][5];
    for(int i = 0; i < 5; i++){
    resultado = 0;
        cin >> matriz[i][i];
        for(int j = 1; j < 5; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] != 0){
                if(i && j != 2){
                    resultado = abs(2 - i);
                    resultado += abs(2-j);
                    cout << resultado;
                }
            }
        }

    }
return 0;   
}