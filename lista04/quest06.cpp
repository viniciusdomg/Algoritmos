#include <iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor A de 20 posi��es. Em seguida, trocar o
primeiro elemento com o �ltimo, o segundo com o pen�ltimo, o terceiro com o
antepen�ltimo, e assim sucessivamente. Ao final, escreva o vetor A modificado.
*/

int main() {
  int A[20], aux;
  for (int i = 0; i < 20; i++) {
    cout << "Digite o valor da " << i + 1 << "a. posicao: ";
    cin >> A[i];
  }
  for (int i = 0; i < 11; i++) {
    aux = A[i];
    A[i] = A[19 - i];
    A[19 - i] = aux;
  }

  for (int i = 0; i < 20; i++) {
    cout << A[i] << " ";
  }
}
