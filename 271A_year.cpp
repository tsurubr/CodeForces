#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int year = 0;
    bool condition = true;
    cin >> year;
    while(condition){
        year++;
        int unit = year % 10; // 5126 5126 = 6       
        int decimal = year/10 % 10; // 5126 512 = 2
        int centesimal = year/100 % 10; // 5126 51 = 1
        int milesimal = year/1000; // 5126 5 = 5
        if(unit != decimal && unit != centesimal && unit != milesimal && decimal != centesimal && decimal != milesimal && centesimal != milesimal){
            cout << year;
            condition = false;
        }
	}
return 0;   
}