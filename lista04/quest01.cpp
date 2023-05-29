#include <iostream>
using namespace std;

/*
Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em
seguida, um valor de código. Se o código for 1, mostrar o vetor na ordem direta
(do primeiro até o último), se o código for 2, mostrar o vetor na ordem inversa
(do último até o primeiro).
*/

int main() {
  int a[20], op, cont, i;

  cout << "Digite os 20 numeros inteiros que deseja: ";
  for (i = 0; i < 20; i++) {
    cin >> a[i];
  }
  cout << "\n\nEscolha se voce quer mostrar os itens do vetor na ordem direta "
          "ou inversa (1-direta, 2-inversa): ";
  cin >> op;
  if (op == 1) {
    for (i = 0; i < 20; i++) {
      cout << " " << a[i];
    }
  }else{
    if(op==2){
    for(i=19;i>=0;i--){
      cout << " " << a[i];
    }  
    }else{
      cout << "\n\nDigite uma das opções válidas!!";
    }
  }
  cout << "\n\n\n\tFIM DO PROGRAMA\n";
  system("pause");
}
