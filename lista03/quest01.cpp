#include <iostream>
using namespace std;

/*Elabore um algoritmo que leia o c�digo (inteiro) e a idade de 100 pessoas e escreva ao final o 
c�digo da pessoa mais velha e a idade da pessoa mais nova.*/

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
      cout << "\n\nDigite uma idade v�lida, sei que voce nao e imortal! ";
    }
  }

  cout << "\n\nA maior idade digitada foi = " << Midade << endl;
  cout << "A menor idade digitada foi = " << mIdade << endl;

  system("pause");
}
