#include <bits/stdc++.h>
using namespace std;

int main(){
    int alex = 0;
    int bob = 0;
    int count = 0;

    cin >> alex >> bob;
    do {
    alex = alex * 3; 
    bob = bob * 2;
    count++;
    } while (alex <= bob);

    cout << count;

    return 0;
}