#include <iostream>
using namespace std;
/*
Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A
seguir, conte quantos valores pares existem no vetor e troque cada um desses
elementos por 0. Em seguida escreva o vetor final.
*/

int main() {
  int a[20], i;

  cout << "Digite os 20 numeros inteiros na sequencia: ";
  for (i = 0; i < 20; i++) {
    cin >> a[i];
    if (a[i] % 2 == 0) {
      a[i] = 0;
    }
  }
  cout << "\n\nEssa é a sequencia dos elementos, com os numeros pares tornados "
          "em 0:";
  for (i = 0; i < 20; i++) {
    cout << " " << a[i];
  }

  cout << "\n\n\nFIM DO PROGRAMA\n";
  system("pause");
}
