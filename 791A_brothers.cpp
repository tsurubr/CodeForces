#include <bits/stdc++.h>
using namespace std;

int main(){
    int alex = 0;
    int bob = 0;
    int count = 0;

    if (alex <= bob){
        alex = alex * 3; 
        bob = bob * 2;
        count++;
    } else{
        cout << count;
    }

    return 0;
}