#include <bits/stdc++.h>

using namespace std;

class Pais{
	public:
		int id, ouro, prata, bronze;
	
		Pais() : id(0), ouro(0), prata(0), bronze(0) {}  // Construtor padrão
	
		Pais(int _id){
			id = _id, ouro = 0, prata = 0, bronze = 0;
		} // Construtor ID
};

bool maior(Pais a, Pais b){
	if(a.ouro == b.ouro){
		if(a.prata == b.prata){
			if(a.bronze == b.bronze){
				return a.id < b.id;
			}
			return a.bronze > b.bronze;
		}
		return a.prata > b.prata;
	}
	return a.ouro > b.ouro;	
}

int main(){
    int n, m;
	cin >> n >> m;
	Pais pais[n+1];
	
	for(int i = 1; i <= n; i++){
		pais[i] = Pais(i); // definindo cada ID como i, iniciando por 1;
	}
	
	for(int i = 0; i < m; i++){
		int o, p, b;
		cin >> o >> p >> b;
		pais[o].ouro++;
		pais[p].prata++;
		pais[b].bronze++;
	}
	
	sort(pais+1, pais+n+1, maior); //ignorando o indice 0 do vetor pais
	
	for(int i=1;i<=n;i++){
    	cout<< pais[i].id << " ";
  	}
    return 0;
}
