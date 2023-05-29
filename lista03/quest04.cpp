#include <iostream>
using namespace std;
/*
Dado um n�mero n inteiro e positivo, dizemos que n � perfeito se n for igual � soma de seus divisores positivos diferentes de n. Construa um programa em C que verifica se um dado n�mero � perfeito.   Ex: 6 � perfeito, pois 1+2+3 = 6.
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
    cout << "\nEsse numero � perfeito!" << endl;
  }else{
    cout << "\nEsse numero � imperfeito!" << endl;
  }
  system("pause");
}
