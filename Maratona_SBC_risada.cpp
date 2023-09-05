#include <bits/stdc++.h>

using namespace std;

int main() {
    string ris;
    cin >> ris;
    int n = ris.size();
    bool engracada = true;

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        while (i < n && ris[i] != 'a' && ris[i] != 'e' && ris[i] != 'i' && ris[i] != 'o' && ris[i] != 'u') {
            i++;
        }

        while (j >= 0 && ris[j] != 'a' && ris[j] != 'e' && ris[j] != 'i' && ris[j] != 'o' && ris[j] != 'u') {
            j--;
        }

        if (i < j && ris[i] != ris[j]) {
            engracada = false;
            break;
        }
    }

    cout << (engracada ? 'S' : 'N') << endl;
    return 0;
}
