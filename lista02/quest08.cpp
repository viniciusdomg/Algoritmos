#include <iostream>
using namespace std;

/*
Elabore um algoritmo que leia um número inteiro
e uma letra (“a” – antecessores ou “s” – sucessores) e
mostre a soma dos seus próximos 10 antecessores ou sucessores
de acordo com a letra digitada.
*/

int main() {

  int numero, cont, result = 0;
  char antsuc;

  cout << "Digite um numero deseja : ";
  cin >> numero;
  cout << "Informe se deseja calculas os antecessores ou sucessores "
          "(a-antecessor e s-sucessor) : ";
  cin >> antsuc;

  if (antsuc == 'a') {
    for (cont = 0; cont <= 10; cont++) {
      result = result + (numero - cont);
    }
    cout << "Essa e a soma dos numeros : " << result << endl;
  } else if (antsuc == 's') {
    for (cont = 0; cont <= 10; cont++) {
      result = result + (numero + cont);
    }
    cout << "Essa e a soma dos numeros sucessores : " << result << endl;
  } else
    cout << "Escolha uma das opcoes validas, ou sucessor ou antecessor!!\n\n";

  system("pause");
}

