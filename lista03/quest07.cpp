#include <iostream>
using namespace std;
/*
Elabore um algoritmo que implemente uma calculadora real: o usuário digita um
número, depois a operação (+, -, *, /), outro número, outra operação, outro
número, e assim continua até que ele digite enfim o sinal “=”, quando então a
calculadora mostra o resultado. Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 + 4 = 6.
O algoritmo deve resolver a expressão na ordem de digitação.
*/

int main() {

  char sinal;
  float num, result = 0;
  bool flag = true;

  cout << "A calculadora só efetua as operações de subtração, adição, "
          "multiplicação e divisão!!";

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
