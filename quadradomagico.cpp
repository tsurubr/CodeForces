#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, soma, somalinha, somacol, somadia, somadib;
    bool igual = true;
    int matriz[1001][1001];
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    somalinha = accumulate(matriz[0], matriz[0] + n, 0);

    for (int i = 0; i < n; i++) {
        soma = accumulate(matriz[i], matriz[i] + n, 0);
        if (soma != somalinha) {
            igual = false;
            break;
        }
    }

    if (igual) {
        for (int j = 0; j < n; j++) {
            soma = 0;
            for (int i = 0; i < n; i++) {
                soma += matriz[i][j];
            }
            if (soma != somalinha) { // se a coluna j for diferente das linhas
                igual = false;
                break;
            }
        }

        somadia = 0;
        somadib = 0;
        for (int i = 0; i < n; i++) {
            somadia += matriz[i][i];
            somadib += matriz[i][n - 1 - i];
        }

        if (somadia != somalinha || somadib != somalinha) {
            igual = false;
        }
    }

    if (!igual) {
        cout << -1 << endl;
    } else {
        cout << somalinha << endl;
    }

    return 0;
}
