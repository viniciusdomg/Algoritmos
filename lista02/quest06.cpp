#include <iostream>
using namespace std;

/*
A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um
algoritmo que calcule e escreva o salário de um professor, sabendo que o valor
da hora/aula segue a tabela abaixo: Professor nível 1 R$ 12,00 por hora aula
Professor nível 2 R$ 17,00 por hora aula
Professor nível 3 R$ 25,00 por hora aula
*/

int main() {

  int nivel, hrau;

  cout << "Digite qual seu nivel como professor (1 ate 3): ";
  cin >> nivel;
  cout << "\nDigite quantas horas voce trabalha por dia : ";
  cin >> hrau;

  if (nivel == 1) {
    cout << "\n\nSua hora aula e de " << 12.00 * hrau << " reais\n\n";
  } else if (nivel == 2) {
    cout << "\n\nSua hora aula e de " << 17.00 * hrau << " reais\n\n";
  } else if (nivel == 3) {
    cout << "\n\nSua hora aula e de " << 25.00 * hrau << " reais\n\n";
  } else {
    cout << "\n\nDigite um nivel de professor valido, so existem de 1 ate "
            "3!\n\n";
  }

  system("pause");
}
