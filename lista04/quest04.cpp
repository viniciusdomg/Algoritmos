#include <iostream>
using namespace std;
/*
Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior
diferença entre dois elementos consecutivos desse vetor. Ao final, escreva a
maior diferença e os índices dos respectivos elementos
*/
int main() {
  int a[20], dif = 0, i, ind1, ind2;
  bool flag = true;

  cout << "Digite os 20 numeros inteiros na sequencia: ";
  for (i = 0; i < 20; i++) {
    cin >> a[i];
    if (flag == false) {
      if (a[i] - a[i - 1] > dif) {
        dif = a[i] - a[i - 1];
        ind1 = i;
        ind2 = i - 1;
      }
    }
    flag = false;
  }
  cout << "\n\nEssa foi a maior diferença dos numeros digitados " << dif;
  cout << "\nOs indices foram " << ind1 << " " << ind2;
  cout << "\n\n\nFIM DO PROGRAMA\n";
  system("pause");
}
