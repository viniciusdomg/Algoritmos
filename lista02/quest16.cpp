#include <iostream>
using namespace std;

/*Leia a idade de uma pessoa e escreva se ela j� tem idade para tirar carteira de habilita��o 
(18 anos completos) ou n�o. Se n�o tiver idade, escreva tamb�m quantos anos faltam para que possa 
tirar a carteira.
 */

int main() {

  int idade;

  cout << "Voce so pode tirar sua carteira ate os 80 anos de idade!!\n";
  cout << "Ter uma idade maior que 80 nao e valida!!\n\n";
  cout << "Informe quantos anos voce tem: ";
  cin >> idade;

  if (idade > 0 && idade < 18) {
    cout << "\n\nFaltam " << 18 - idade
         << " anos para voce poder tirar sua carteira de habilitacao!\n\n";
  } else if (idade >= 18 && idade <= 80) {
    cout << "\n\nVoce ja PODE tirar sua carteira de habilitacao!\n\n";
  } else {
    cout << "\nDigite uma idade que seja valida!\n\n";
  }

  system("pause");
}
