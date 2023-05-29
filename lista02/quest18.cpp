#include <iostream>
using namespace std;

/*
Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas
que a pessoa irá pagar, verifique e escreva se o parcelamento foi com juros ou
se foi sem juros.
*/

int main() {

  float total, parcela;
  int qntParc;

  cout << "\nInforme o valor total da compra: ";
  cin >> total;
  cout << "\nInforme o valor da parcela dessa compra: ";
  cin >> parcela;
  cout << "\nEm quantas parcelas voce vai pagar a compra? ";
  cin >> qntParc;

  if (parcela * qntParc > total) {
    cout << "\n\nSeu parcelamento foi com juros!!";
  } else if (parcela * qntParc == total) {
    cout << "\n\nSeu parcelamento foi sem juros!!";
  } else {
    cout << "\n\nSeu parcelmaento foi estranho!";
  }

  cout << "\n\nFIM DO PROGRAMA\n\n";
  system("pause");
}
