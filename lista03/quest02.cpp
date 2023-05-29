#include <iostream>
using namespace std;

/*Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a 
aplica��o de multas de tr�nsito. O algoritmo deve ler as seguintes informa��es para cada um dos 
N motoristas:
- O n�mero da carteira de motorista (inteiro);
- N�mero de multas;
- O valor de cada uma das multas.
Deve ser impresso o valor da d�vida de cada motorista e ao final da leitura o total de recursos 
arrecadados (somat�rio de todas as multas). O algoritmo dever� imprimir tamb�m o n�mero da carteira do 
motorista que obteve o maior n�mero de multas*/

int main() {
  
  int numCart, qntMulta, maMulta = 0, carteira, cont;
  float valorM, valorArrec = 0, divida;
  char opcao;

  do{
    cout << "Digite o numero da sua habilitacao: ";
    cin >> numCart;
    cout << "Digite quantas multas voce tem na carteira: ";
    cin >> qntMulta;
    divida = 0;
    for(cont=0; cont<qntMulta; cont++){
      cout << "\nDigite o preco da sua " << cont+1 << "a multa: ";
      cin >> valorM;
      valorArrec += valorM;
      divida += valorM;
      cout << "\nDivida do motorista = " << divida << endl;
    }
    if(qntMulta>maMulta){
      maMulta = qntMulta;
      carteira = numCart;
    }

    cout << "\n\nVoce deseja incrementar mais algum motorista? (s-sim, n-nao)\n\n ";
    cin >> opcao;
  }while(opcao=='s');

  cout << "\n\nO valor arrecado pelo Detran com as multas pagas foram de: " << valorArrec << endl;
  cout << "Numero da carteira do motorista com maior quantidade de multas: " << carteira;

  system("pause");
}
