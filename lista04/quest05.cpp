#include <iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor A de 20 posi��es. Em seguida, trocar
(armazenando em um novo vetor B) o primeiro elemento com o �ltimo, o segundo com
o pen�ltimo, o terceiro com o antepen�ltimo, e assim sucessivamente. Ao final,
escreva os vetores A e B.
*/

int main() {
  int a[20], b[20], i, operador = 0;

  cout << "Digite todos os 20 n�meros em sequ�ncia: ";
  for (i = 0; i < 20; i++) {
    cin >> a[i];
    if (i == 19) {
      for (i = 19; i >= 0; i--) {
        b[operador] = a[i];
        operador++;
      }
      i = 20;
    }
  }
  cout << "Esses s�o os vetores A e B -\nA:";
  for (i = 0; i < 20; i++) {
    cout << " " << a[i];
  }
  cout << "\nB:";
  for (i = 0; i < 20; i++) {
    cout << " " << b[i];
  }
}
