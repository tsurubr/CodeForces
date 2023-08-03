#include <bits/stdc++.h>
using namespace std;

int main() {
    int distance = 0;
    int elefoot = 0;

    cin >> distance;
    elefoot = distance / 5;
    if (distance % 5 > 0){
        cout << elefoot + 1;
    }
    else{
        cout << elefoot;
    }
    
return 0;
}
