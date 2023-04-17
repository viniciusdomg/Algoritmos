#include <iostream>
using namespace std;

/*
O cardápio de uma lanchonete é o seguinte:

Sanduíche
Código    Descrição    Preço Unitário
100     Cachorro quente     1,10
101      Baurú simples      1,30
102      Baurú com ovo      1,50
103       Hamburger         1,10
104      Cheesburger        1,30

Bebida
Código    Descrição    Preço Unitário
105      Refrigerante       1,00
106         Suco            2,00
107        Nescau           1,50

Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma
bebida) e a quantidade de cada um e calcule o valor a ser pago por aquele
lanche.
*/
int main() {

  int cod, quant;
  float lanche = 0;
  char escolha;

  cout << "Voce vai querer sanduiche? (s - sim / nao - qualquer letra fora o "
          "s) : ";
  cin >> escolha;

  if (escolha == 's') {
    cout << "\n\nDigite o codigo do sanduiche que deseja : ";
    cin >> cod;
    cout << "\nQuantos sanduiches voce vai querer : ";
    cin >> quant;
    switch (cod) {
    case 100:
      lanche = quant * 1.10;
      break;
    case 101:
      lanche = quant * 1.30;
      break;
    case 102:
      lanche = quant * 1.50;
      break;
    case 103:
      lanche = quant * 1.10;
      break;
    case 104:
      lanche = quant * 1.30;
      break;
    default:
      cout << "\n\nEscolha um codigo que esteja dentro do cardapio!\n\n";
    }
  } else
    cout << "\n\nOkay!";

  cout
      << "\n\nVoce vai querer bebida? (s - sim / qualquer outra letra - nao : ";
  cin >> escolha;

  if (escolha == 's') {
    cout << "\n\nDigite o codigo da bebida que deseja : ";
    cin >> cod;
    cout << "\nQuantos bebidas que voce vai querer : ";
    cin >> quant;
    switch (cod) {
    case 105:
      lanche = lanche + quant * 1.00;
      break;
    case 106:
      lanche = lanche + quant * 2.00;
      break;
    case 107:
      lanche = lanche + quant * 1.50;
      break;
    default:
      cout << "\n\nEscolha um codigo que esteja dentro do cardapio!\n\n";
    }
  } else
    cout << "\nOkay!";

  cout << "\n\nTotal = " << lanche << "$";
  cout << "\nObrigado e VOLTE SEMPRE!!\n\n";
  system("pause");
}
