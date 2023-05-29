#include <iostream>
using namespace std;

/*
Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par,
escreva se é múltiplo de 10; se for ímpar, escreva se é divisível por 5.
*/

int main() {

  int numero;

  cout << "Digite um numero inteiro qualquer: ";
  cin >> numero;

  if (numero % 2 == 0) {
    cout << "\n\nEsse numero e par!!";
    if (numero % 10 == 0) {
      cout << "\nEsse numero tambem e multiplo de 10!!";
    }
  } else {
    cout << "\n\nEsse numero e impar!!";
    if (numero % 5 == 0) {
      cout << "\nEsse numero tambem e divisivel por 5!!" << endl;
    }
  }

  cout << "\n\nFIM DO PROGRAMA\n";
  system("pause");
}
