#include <iostream>
using namespace std;

/*Elabore um algoritmo que leia o código (inteiro) e a idade de 100 pessoas e escreva ao final o 
código da pessoa mais velha e a idade da pessoa mais nova.*/

int main() {

  int idade, Midade = 1, mIdade = 120, cont;

  for(cont=0; cont<100; cont++){
    cout << "Digite sua idade: ";
    cin >> idade;
    if(idade>0 && idade<=120){
      if(idade>Midade){
        Midade = idade;
      }
      if (idade<mIdade){
        mIdade = idade;
      }
    }else{
      cout << "\n\nDigite uma idade válida, sei que voce nao e imortal! ";
    }
  }

  cout << "\n\nA maior idade digitada foi = " << Midade << endl;
  cout << "A menor idade digitada foi = " << mIdade << endl;

  system("pause");
}
