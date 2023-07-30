#include <bits/stdc++.h>
using namespace std;

int main(void){
int n = 0;
int a = 0;
int b = 0;
int c;
int sol = 0;

cin >> n;
for (int i = 0; i < n; i++){
    cin >> a >> b >> c;
    if (a + b + c >= 2)
    {
        sol++;
    }
}
cout << sol;

return 0;
}