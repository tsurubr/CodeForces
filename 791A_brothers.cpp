#include <bits/stdc++.h>
using namespace std;

int main(){
    int alex = 0;
    int bob = 0;

    do{
        alex = alex * 3;
        bob = bob * 2;
    } while (alex * 3 <= bob * 2);
    
    return 0;
}