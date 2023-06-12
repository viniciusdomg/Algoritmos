#include<iostream>
using namespace std;

/*
Escreva um algoritmo que leia uma matriz A(15,5) e a escreva. Verifique, a seguir, quais os 
elementos de A que estão repetidos e quantas vezes cada um está repetido. Escrever cada elemento
 repetido com uma mensagem dizendo quantas vezes cada elemento aparece em A.
*/

const int l = 15, c = 5;
int main(){
	
	int m[l][c], i, j, k, y, cont=0;
	bool x[l][c];
	
	cout << "Digite os elementos da matriz\n";
	for(i=0;i<l;i++){
		for(j=0; j<c; j++){
			cout << "\nElemento [" << i+1 << "] [" << j+1 << "]: ";
			cin >> m[i][j];
			x[i][j] = false;
		}
	}
	
	for(i=0;i<l;i++){
		for(j=0; j<c; j++){
			cont = 0;
			for(y=0;y<l;y++){
				for(k=0; k<c; k++){
					if(m[y][k] == m[i][j] && !x[y][k]){
						cont++;
						x[y][k] = true;
					}			
				}
			}
			if(cont>1){
				if(cont-1==1){
					cout << "\n\tO elemento " << m[i][j] << " se repete " << cont-1 << " vez";
				}else{
					cout << "\n\tO elemento " << m[i][j] << " se repete " << cont-1 << " vezes";
				}
			}
		}
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
