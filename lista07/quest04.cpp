#include<iostream>
using namespace std;

/*
Escreva um programa que l� um valor inteiro (maior do que 1 e menor ou igual a 10) e exibe a tabuada 
(at� 10) de multiplica��o do n�mero lido. Voc� dever� escrever as seguintes fun��es:

- int LeNumero(int n1,int n2)

L� um n�mero inteiro no intervalo especificado (n1, n2) e o retorna. Cada vez que for digitado um 
n�mero inv�lido (fora do intervalo especificado) a fun��o deve exibir a mensagem "N�mero inv�lido.
Digite novamente!"

- void Tabuada( int n)

Recebe como par�metro um n�mero inteiro e exibe na tela a tabuada de multiplica��o at� 10 do n�mero 
lido. Exemplo: n�mero lido 5
5 x 1 = 5 5 x 2 = 10 .... 5 x 10 = 50
*/

int leNumero(int n1, int n2);
void tabuada(int n);

int main(){
	
	int n1, n2, numero;
	
	cout << "Digite o primeiro numero do intervalo: ";
	cin >> n1;
	cout << "\nDigite o fim do intervalo: ";
	cin >> n2;
		
	numero = leNumero(n1, n2);
	tabuada(numero);
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}

int leNumero(int n1, int n2){
	int numero;
	bool flag = false;
	do{
		system("cls");
		if(flag){
			cout << "Numero invalido. Digite novamente!!";
			flag = false;
		}
		cout << "\nDigite um numero dentro do intervalo que definiu: ";
		cin >> numero;
		if(numero<n1 || numero>n2){
			flag = true;
		}
	}while(flag);
	
	return numero;
}

void tabuada(int n){
	system("cls");
	cout << "\n1x" << n << " = " << 1*n;
	cout << "\n2x" << n << " = " << 2*n;
	cout << "\n3x" << n << " = " << 3*n;
	cout << "\n4x" << n << " = " << 4*n;
	cout << "\n5x" << n << " = " << 5*n;
	cout << "\n6x" << n << " = " << 6*n;
	cout << "\n7x" << n << " = " << 7*n;
	cout << "\n8x" << n << " = " << 8*n;
	cout << "\n9x" << n << " = " << 9*n;
	cout << "\n10x" << n << " = " << 10*n;	
}

