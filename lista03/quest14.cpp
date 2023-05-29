#include <iostream>
using namespace std;

/*
Elabore um algoritmo que apresente um menu contendo as op��es 1-Tri�ngulo,
2-Quadrado, 3-Ret�ngulo, 4-Trap�zio, 5-C�rculo, 6-Sair. Em seguida, de acordo
com a op��o escolhida pelo usu�rio, o algoritmo deve solicitar as informa��es
necess�rias para c�lculo da �rea, efetuar o c�lculo e escrever o resultado. O
algoritmo s� dever� finalizar quando o usu�rio escolher a op��o 6-Sair.
*/

int main() {
  float h, b, bm;
  int opcao;

  do {
    cout << "\t-----MENU-----\n";
    cout << "\t1 - Tri�ngulo \n\t2 - Quadrado, \n\t3 - Ret�ngulo, \n\t4 - "
            "Trap�zio, \n\t5 - C�rculo, \n\t6 - Sair";
    cout << "\n\nDigite qual op��o de calculo deseja: ";
    cin >> opcao;
    switch (opcao) {
    case 1:
      cout << "\nDigite a base e a altura, respectivamente: ";
      cin >> b >> h;
      cout << "\nArea do tri�ngulo = " << (b * h) / 2;
      break;
    case 2:
      cout << "\nDigite a base do quadrado";
      cin >> b;
      cout << "\nArea do quadrado = " << b * b;
      break;
    case 3:
      cout << "\nDigite a base e a altura, respectivamente: ";
      cin >> b >> h;
      cout << "\nArea do ret�ngulo = " << b * h;
      break;
    case 4:
      cout << "\nDigite a base maior, base menor e a altura, respectivamente: ";
      cin >> b >> bm >> h;
      cout << "\nArea do trap�zio = " << ((b + bm) * h) / 2;
      break;
    case 5:
      cout << "\nDigite o raio do circulo: ";
      cin >> b;
      cout << "\nArea do circulo = " << (b * b) * 3.14;
      break;
    case 6:
      cout << "\n\nFIM DO PROGRAMA";
    default:
      "\n\nDIGITE UMA DAS OP��ES V�LIDAS";
    }
  } while (opcao != 6);

  cout << "\n\n\n";
  system("pause");
}
