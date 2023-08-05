#include <bits/stdc++.h>
using namespace std;

int main() {
    int rooms = 0;
    int people = 0;
    int capacity = 0;
    int result = 0;

    cin >> rooms;
    for (int i =0; i < rooms; i++){
        cin >> people >> capacity;
        if (people + 1 <= capacity){
            result++;
        }
    }
    cout << result++;
    
return 0;
}
