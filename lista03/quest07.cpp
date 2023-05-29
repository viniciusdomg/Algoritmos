#include <iostream>
using namespace std;
/*
Elabore um algoritmo que implemente uma calculadora real: o usu�rio digita um
n�mero, depois a opera��o (+, -, *, /), outro n�mero, outra opera��o, outro
n�mero, e assim continua at� que ele digite enfim o sinal �=�, quando ent�o a
calculadora mostra o resultado. Exemplos: 1 + 3 � 2 / 2 = 1; 4 � 2 / 1 + 4 = 6.
O algoritmo deve resolver a express�o na ordem de digita��o.
*/

int main() {

  char sinal;
  float num, result = 0;
  bool flag = true;

  cout << "A calculadora s� efetua as opera��es de subtra��o, adi��o, "
          "multiplica��o e divis�o!!";

  cout << "\n\nDigite o numero: ";
  cin >> num;

  do {
    if (flag == true) {
      result += num;
    } else {
      cout << "\nOperador: ";
      cin >> sinal;
      if(sinal!='='){
        cout << "\nDigite o numero: ";
        cin >> num;
      }
      switch (sinal) {
      case '+':
        result += num;
        break;
      case '-':
        result -= num;
        break;
      case '*':
        result *= num;
        break;
      case '/':
        result /= num;
      }
    }
    flag = false;
  } while (sinal != '=');

  cout << "\n= " << result << endl;

  system("pause");
}
