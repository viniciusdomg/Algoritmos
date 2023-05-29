#include<iostream>
#include<math.h>
using namespace std;

/*
	Os números capicuas são aqueles que escritos da direita para esquerda ou da esquerda para 
	direita tem o mesmo valor. Exemplo 929, 44, 97379. Fazer um algoritmo que, lido um número 
	inteiro positivo, calcule e escreva se este é ou não capicua.
*/

int main(){
	
	int digito, num, n, cont, parte;
	
	cout << "Quantos digitos tera o numero (ex:549 tem 3 digitos): ";
	cin >> n;
	
	cout << "\nDigite um numero qualquer para saber se e capicua ou nao: ";
	cin >> num;
	
	for(cont=0; cont<n; cont++){
		parte = 10 * pow(10, cont);
		parte = num%parte;
		parte /= pow(10, cont);
		digito += (pow(10, n-(cont+1))*parte);	
	}
	
	if(digito==num){
		cout << "\n\tO numero " << num << " e capicua";
	}else{
		cout << "\nEsse numero nao e capicua!";
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
