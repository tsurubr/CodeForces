#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0, m = 0, a = 0;
    int i = 0;
    cin >> n >> m >> a;
    int theatre = n * m;
    int flagstone = a * a;
	
    do{
		i++;
        flagstone *= i;
    }while(theatre > flagstone);
    cout << i;
}