#include <iostream>
using namespace std;

/*Chico tem 1,50m e cresce 2 cent�metros por ano, enquanto Juca tem 1,10m e cresce 3 cent�metros por ano. Construir um algoritmo que calcule e imprima quantos anos ser�o necess�rios para que Juca seja
maior que Chico.
*/

int main() {

  int ano=0;
  float chico = 1.50, joao = 1.10;

  do{
    chico += 0.02;
    joao += 0.03;
    ano++;
    
  }while(joao<chico);

  cout << "O tempo necessario para que joao seja maior que chico: " << ano;

  system("pause");
  
}
