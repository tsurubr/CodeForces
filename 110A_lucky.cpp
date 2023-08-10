#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long answer = n;
        for (long long i = 2; i * i <= n; ++i) {
            while (n % i == 0) {
                answer = i;
                n /= i;
            }
        }

        if (n > 1) {
            answer = n;
        }
        cout << answer << endl;
    }
    return 0;
}
