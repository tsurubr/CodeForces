#include <bits/stdc++.h>
using namespace std;

class Inimigo {    
	public:
		int id, x, y;
		bool vivo;

		//É necessário ter um construtor sem parâmetros para criar o vetor na função principal
		Inimigo(){
			id = -1;
			x = -1; 
			y = -1;
			vivo = false;
		}

		//TODO: Crie um construtor que inicializa um inimigo usando os parâmetros abaixo.
		Inimigo(int _ID, int _X, int _Y, bool _VIVO){
			id = _ID;
			x = _X;
			y = _Y;
			vivo = _VIVO;
		}

		//TODO: Método que muda o status do inimigo de vivo para morto caso seja acertado pelo lazer na posição (X,Y).
		void foi_acertado(int X, int Y){
			if(X==this->x && Y==this->y) this -> vivo = false;
		}

};

int main(){

    int N; //Quantidade de Inimigos
    cin >> N; 

    Inimigo inimigo[N];

    for(int id=0;id<N;id++){
        int x, y;
        cin >> x >> y;

        inimigo[id] = Inimigo(id, x, y, true);
    }

    int M; //Quantidade de Inimigos
    cin >> M; 

    for(int i=0;i<M;i++){
        int x, y;
        cin >> x >> y;

        for(int id=0;id<N;id++){
            inimigo[id].foi_acertado(x,y);
        }
    }

    //TODO: Crie um laço for que imprime o id de todos os inimigos que foram acertados.
	for(int i = 0; i < N; i++){
		if(inimigo[i].vivo == false) cout << inimigo[i].id << " ";
	}
}
