#include <iostream>
using namespace std;

/*
Leia um n�mero qualquer e verifique se ele � par ou �mpar. Se o n�mero for par,
escreva se � m�ltiplo de 10; se for �mpar, escreva se � divis�vel por 5.
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
