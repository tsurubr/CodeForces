#include <bits/stdc++.h>
using namespace std;

int main(){
    int resultado = 0;
    int matriz[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matriz[i][j];

            if(matriz[i][j] != 0){
                if((i || j) != 2){
                    if (i != 2){
                        resultado = abs(2 - i);
                    }
                    if(j != 2){
                        resultado += abs(2 - j);                       
                    }
                    cout << resultado;                
                }else{
                    cout << 0;
                }
            }
        }
    }
return 0;   
}