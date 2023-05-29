#include <iostream>
using namespace std;
/*
Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito.   Ex: 6 é perfeito, pois 1+2+3 = 6.
*/

int main() {
  
  int num, cont, result = 0;

  cout << "Digite um numero inteiro e positivo: ";
  cin >> num;

  for(cont=1; cont<num; cont++){
    if(num%cont==0){
      result += cont;
    }
  }
  if(result==num){
    cout << "\nEsse numero é perfeito!" << endl;
  }else{
    cout << "\nEsse numero é imperfeito!" << endl;
  }
  system("pause");
}
