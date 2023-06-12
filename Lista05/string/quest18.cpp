#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que leia duas strings A e B e junte-as em uma única string C.
Entradas: “frase 1” e “outra frase qualquer”
Saída: “frase 1 outra frase qualquer”
*/

int main(){
	
	string A, B, C;
	int tam, i, j=0;
	bool flag = true;
	
	cout << "Digite uma frase qualquer: ";
	getline(cin, A);
	getchar();
	cout << "\nDigite uma frase diferente da primeira: ";
	getline(cin, B);
	
	C = A+' '+B;
	cout << "\n\nA frase: " << C;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
