#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int result = 0;
    
    for (int i = 0; i < n; i++) {
        string value;
        cin >> value;
        
        // Procurar por cada caractere da string
        for (char c : value) {
            if (c == '+') {
                result++;
                break;
            } else if (c == '-') {
                result--;
                break;
            }
        }
    }
    
    cout << result << endl;
    return 0;
}
