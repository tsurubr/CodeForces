#include <bits/stdc++.h>
using namespace std;

bool match(char a, char b){
	return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));	
}

int main(){
    int t;
	cin >> t;
	
	while(t--){
		bool valid = true;
		string s;
		cin >> s;
		stack <char> pilha;
		for(char c : s){
			if(c == '(' || c == '[' || c == '{'){
				pilha.push(c);
			} else{
				if(pilha.empty() || !match(pilha.top(), c)){
					valid = false;
					break;
				}
				pilha.pop();
			}
		}
		cout << (valid? 'S' : 'N') << endl;
	}
    return 0;
}
