#include <bits/stdc++.h>
using namespace std;

int main(void){
int n = 0;
int k = 0;
int a = 0;
int result = 0;

cin >> n >> k;

for (int i = 0; i < n; i++){
    cin >> a;
    if (a > k){
        result++;
    }
}
cout << result << endl;
return 0;
}