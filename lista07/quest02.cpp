#include<iostream>
using namespace std;

/*
Fa�a uma fun��o que recebe um n�mero inteiro por par�metro e retorna verdadeiro se ele for par e 
falso se for �mpar.
*/

bool parImpar(int n);

int main(){
	
	int numero;
	bool verifica;
	
	cout << "Digite um numero para saber se e par ou impar: ";
	cin >> numero;
	
	verifica = parImpar(numero);
	
	if(verifica){
		cout << "\n\tO numero e par!!";
	}else{
		cout << "\n\tO numero e impar!!";
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}

bool parImpar(int n){
	if(n%2==0){
		return true;
	}else{
		return false;
	}
}
