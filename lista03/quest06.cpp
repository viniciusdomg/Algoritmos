#include <iostream>
using namespace std;
/*
Em um jogo de adivinha��o, o jogador deve descobrir um n�mero entre 1 e 10 usando at� tr�s tentativas. 
A cada tentativa o jogador � informado se o n�mero foi descoberto, se ele � maior ou menor do que a 
tentativa. Se ap�s tr�s tentativas o jogador n�o descobrir o n�mero, ent�o ele perde o jogo. Fa�a um 
algoritmo que implemente esse jogo, considerando que o n�mero a ser descoberto ser� definido dentro do 
algoritmo e n�o estar� vis�vel para o usu�rio. 
*/

int main() {

  int num = 5, descob, cont;

  for(cont = 0; cont<3; cont++){
    cout << "Digite o numero da tentiva: ";
    cin >> descob;
    if(descob==num){
      cout << "\nVoc� descobriu o numero!!";
      cont = 3;
    }else if (descob>num){
      cout << "\n� um n�mero menor, tente novamente!\n\n";
    }else if (descob<num){
      cout << "\n� um n�mero maior, tente novamente\n\n";
    }
  }  
  if(descob==num){
    cout << "\nParab�ns, voc� ganhou!!\n\n";
  }else
    cout << "\nVoc� Perdeu :(\n\n";

  system("pause");
}
