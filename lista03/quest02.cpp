#include <iostream>
using namespace std;

/*Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a 
aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada um dos 
N motoristas:
- O número da carteira de motorista (inteiro);
- Número de multas;
- O valor de cada uma das multas.
Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos 
arrecadados (somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do 
motorista que obteve o maior número de multas*/

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
