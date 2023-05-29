#include <iostream>
using namespace std;
/*
Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas. 
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a 
tentativa. Se após três tentativas o jogador não descobrir o número, então ele perde o jogo. Faça um 
algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro do 
algoritmo e não estará visível para o usuário. 
*/

int main() {

  int num = 5, descob, cont;

  for(cont = 0; cont<3; cont++){
    cout << "Digite o numero da tentiva: ";
    cin >> descob;
    if(descob==num){
      cout << "\nVocê descobriu o numero!!";
      cont = 3;
    }else if (descob>num){
      cout << "\nÉ um número menor, tente novamente!\n\n";
    }else if (descob<num){
      cout << "\nÉ um número maior, tente novamente\n\n";
    }
  }  
  if(descob==num){
    cout << "\nParabéns, você ganhou!!\n\n";
  }else
    cout << "\nVocê Perdeu :(\n\n";

  system("pause");
}
