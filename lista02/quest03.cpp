#include<iostream>
using namespace std;

/*
Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero 
(“m”-masculino ou “f”-feminino).
Utilize as seguintes fórmulas para cálculo do peso ideal:
• Masculino = (72,7 x altura) - 58
• Feminino = (62,1 x altura) - 44,7
*/

int main(){
	
	float altura;
	char gen;
	
	cout << "Digite qual e o seu sexo (m-masculino e f-feminino): ";
	cin >> gen;
	cout << "\nDigite qual sua altura: ";
	cin >> altura;
	
	if(gen=='m'){
		cout << "\n\nO peso ideal para voce e " << 72.2*altura-58 << endl;
	}else{
		if(gen=='f'){
			cout << "\n\nO peso ideal para voce e " << 62.1*altura-44.7 << endl;
		}else{
			cout << "\n\nDIGITE um genero valido, lembrando, m - masculino e f - feminino!!\n\n";
		}
	}
	
	system("pause");
}
