#include <bits/stdc++.h>
using namespace std;

int main(){
    int vezes = 0;
    int numero = 0;
    int result = 0;

    cin >> numero >> vezes;
    for (int i = 0; i < vezes; i++){
        if(numero % 10 == 0){
            numero = numero / 10;
        }
        else{
            numero--;
        }
    }
    cout << numero;
return 0;
}