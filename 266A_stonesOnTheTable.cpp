#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    int R = 0 , B = 0 , G = 0;

    char array[51];

    cin >> n;

    for(int i = 0 ; i < n ; i++){
        cin >> array[i];
    }

    for(int i = 0 ; i < n ; i++){
        if(array[i] == 'R'){
            if(array [i] == 'R' && array [i+1] == 'R'){
                R++;
            }
        }else if(array[i] == 'B'){
            if(array [i] == 'B' && array [i+1] == 'B'){
                B++;
            }
        } else if(array[i] == 'G'){
            if(array [i] == 'G' && array [i+1] == 'G'){
                G++;
            }
        }
    }
    int res = R + G + B;

    cout << res << endl;
return 0;
}