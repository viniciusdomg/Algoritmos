#include<iostream>
using namespace std;

/*
Implemente o jogo da velha usando uma matriz como tabuleiro.
*/

int main(){
	
	int pos1, pos2, i, j;
	char m[3][3], jogada = 1;
	bool vencedor = false, empate = false, t[3][3], flag = true;
	
	for(i=0; i<3; i++){	
		for(j=0;j<3;j++){
			m[i][j] = ' ';
			t[i][j] = false;
		}
	}
	
	do{
		
		system("cls");
		for(i=0; i<3; i++){
			cout << "\n";
			for(j=0;j<3;j++){ 
				cout << m[i][j];	
				if(j<2){
					cout << " | ";
				}
			}
			if(i<2){			
				cout << "\n---------";
			}
		}
		if(jogada%2!=0){
			cout << "\n\nVez do jogador 1 'X'\n";
			do{
				if(!flag){
					cout << "\n\n!!!Nesta casa nao pode!!!\n";
				}
				cout << "\nDigite a linha da jogada: ";
				cin >> pos1;
				cout << "Digite a coluna da jogada: ";
				cin >> pos2; 
				flag = false;
				if(!t[pos1][pos2]){
					m[pos1][pos2] = 'X';
					t[pos1][pos2] = true;
					flag = true;
				}
			}while(!flag);
		}else{
			cout << "\n\nVez do jogador 1 'O'\n";
			do{
				if(!flag){
					cout << "\n\n!!!Nesta casa nao pode!!!\n";
				}
				cout << "\nDigite a linha da jogada: ";
				cin >> pos1;
				cout << "Digite a coluna da jogada: ";
				cin >> pos2; 
				flag = false;
				if(!t[pos1][pos2]){
					m[pos1][pos2] = 'O';
					t[pos1][pos2] = true;
					flag = true;
				}
			}while(!flag);
		}
		//Use de um for e deixe o teste mais simples!!
		if(jogada>4){
			system("cls");
			if(m[0][0] == 'X' && m[1][1]=='X' && m[2][2]=='X'){
				vencedor = true;
				cout << "\nJogador 1 venceu";
			}else if (m[0][0] == 'O' && m[1][1]=='O' && m[2][2]=='O'){
				vencedor = true;
				cout << "\nJogador 2 venceu";
			}else if (m[0][0] == 'X' && m[0][1]=='X' && m[0][2]=='X' || 
					m[1][0] == 'X' && m[1][1]=='X' && m[1][2]=='X' ||
					m[0][0] == 'X' && m[0][1]=='X' && m[0][2]=='X'){
						vencedor = true;
						cout << "\nJogador 1 venceu";
			}else if(m[0][0] == 'O' && m[0][1]=='O' && m[0][2]=='O' || 
					m[1][0] == 'O' && m[1][1]=='O' && m[1][2]=='O' ||
					m[0][0] == 'O' && m[0][1]=='O' && m[0][2]=='O'){
						vencedor = true;
						cout << "\nJogador 2 venceu";
			}else if(m[0][0] == 'X' && m[1][0]=='X' && m[2][0]=='X' || 
					m[0][1] == 'X' && m[1][1]=='X' && m[2][1]=='X' ||
					m[0][2] == 'X' && m[1][2]=='X' && m[2][2]=='X'){
						vencedor = true;
						cout << "\nJogador 1 venceu";
			}else if(m[0][0] == 'O' && m[1][0]=='O' && m[2][0]=='O' || 
					m[0][1] == 'O' && m[1][1]=='O' && m[2][1]=='O' ||
					m[0][2] == 'O' && m[1][2]=='O' && m[2][2]=='O'){
						vencedor = true;
						cout << "\nJogador 2 venceu";
			}else if(m[2][0] == 'X' && m[1][1]=='X' && m[0][2]=='X'){
				vencedor = true;
				cout << "\nJogador 1 venceu";
			}else if (m[2][0] == 'O' && m[1][1]=='O' && m[0][2]=='O'){
				vencedor = true;
				cout << "\nJogador 2 venceu";
			}else{
				empate = true;
				cout << "\nDeu empate :(";
			}		  
		}
		jogada ++;
	}while(!vencedor && !empate);
	
	cout << "\n";
	for(i=0; i<3; i++){
		cout << "\n";
		for(j=0;j<3;j++){ 
			cout << m[i][j];	
			if(j<2){
				cout << " | ";
			}
		}
		if(i<2){			
			cout << "\n---------";
		}
	}

	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
