#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w, div;
    for(int i = 0; i < w; i++){
        div += i * k;
    }
    if(div <= n){
        cout << 0;
    }else{
        cout << div - n;
    }
}