#include <iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e
pergunte ao usuário quais elementos ele deseja ver: se os elementos que estão em
índices pares ou se os elementos que estão em índices ímpares. Mostre somente os
elementos solicitados.
*/

int main() {
  int a[15], elemento, i;

  cout << "Digite os 15 numeros inteiros na sequencia: ";
  for (i = 0; i < 15; i++) {
    cin >> a[i];
  }

  cout << "\n\nAgora escolha se voce quer solicitar numeros guardados na "
          "memória com indices pares ou ímpares(1-impar, 2-par):";
  cin >> elemento;
  for (i = 0; i < 15; i++) {
    if (elemento == 2) {
      if (i % 2 == 0)
        cout << " " << a[i];
    } else if (elemento == 1) {
      if (i % 2 != 0)
        cout << " " << a[i];
    }
  }
  cout << "\n\n\nFIM DO PROGRAMA\n";
  system("pause");
}
