#include <bits/stdc++.h>
using namespace std;

int main(){
    int vezes = 0;
    int mishka = 0;
    int chris = 0;
    int result = 0;

    cin >> vezes;
    for (int i = 0; i < vezes; i++){
        cin >> mishka >> chris;
        if(mishka > chris){
            result++;
        }
        else if(mishka < chris){
            result--;
        }
    }
    if(result > 0){
        cout << "Mishka" << endl;
    } else if (result < 0){
        cout << "Chris" << endl;
    }else{
        cout << "Friendship is magic!^^" << endl;
    }
return 0;
}