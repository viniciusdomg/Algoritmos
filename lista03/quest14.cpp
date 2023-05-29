#include <iostream>
using namespace std;

/*
Elabore um algoritmo que apresente um menu contendo as opções 1-Triângulo,
2-Quadrado, 3-Retângulo, 4-Trapézio, 5-Círculo, 6-Sair. Em seguida, de acordo
com a opção escolhida pelo usuário, o algoritmo deve solicitar as informações
necessárias para cálculo da área, efetuar o cálculo e escrever o resultado. O
algoritmo só deverá finalizar quando o usuário escolher a opção 6-Sair.
*/

int main() {
  float h, b, bm;
  int opcao;

  do {
    cout << "\t-----MENU-----\n";
    cout << "\t1 - Triângulo \n\t2 - Quadrado, \n\t3 - Retângulo, \n\t4 - "
            "Trapézio, \n\t5 - Círculo, \n\t6 - Sair";
    cout << "\n\nDigite qual opção de calculo deseja: ";
    cin >> opcao;
    switch (opcao) {
    case 1:
      cout << "\nDigite a base e a altura, respectivamente: ";
      cin >> b >> h;
      cout << "\nArea do triângulo = " << (b * h) / 2;
      break;
    case 2:
      cout << "\nDigite a base do quadrado";
      cin >> b;
      cout << "\nArea do quadrado = " << b * b;
      break;
    case 3:
      cout << "\nDigite a base e a altura, respectivamente: ";
      cin >> b >> h;
      cout << "\nArea do retângulo = " << b * h;
      break;
    case 4:
      cout << "\nDigite a base maior, base menor e a altura, respectivamente: ";
      cin >> b >> bm >> h;
      cout << "\nArea do trapézio = " << ((b + bm) * h) / 2;
      break;
    case 5:
      cout << "\nDigite o raio do circulo: ";
      cin >> b;
      cout << "\nArea do circulo = " << (b * b) * 3.14;
      break;
    case 6:
      cout << "\n\nFIM DO PROGRAMA";
    default:
      "\n\nDIGITE UMA DAS OPÇÔES VÁLIDAS";
    }
  } while (opcao != 6);

  cout << "\n\n\n";
  system("pause");
}
