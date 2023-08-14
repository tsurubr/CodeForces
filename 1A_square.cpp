#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, m, a;
    cin >> n >> m >> a;

    int row = ceil(n / a);
    int col = ceil(m / a);
    long long flagstone = row * col;
    cout << flagstone << endl;

    return 0;
}
