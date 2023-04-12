#include <iostream>
using namespace std;

/*Dados tr�s valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
tri�ngulo e, se forem, verificar e escrever se � um tri�ngulo equil�tero, is�sceles ou escalenos. 
Se eles n�o formarem um tri�ngulo, escrever esta mensagem. Considere as seguintes propriedades:
� O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
� Equil�teros: tem os comprimentos dos tr�s lados iguais;
� Is�sceles: tem os comprimentos de dois lados iguais; � Escaleno: tem os comprimentos dos tr�s
lados diferentes. */

int main (){
	
	float x,y, z;
	
	cout << "Digite tres valores, maiores que 0, para verificacao de triangulo: ";
	cin >> x >> y >> z;
	
	if(x>0 && y>0 && z>0){
		if(x==y && y==z){
			cout << "\n\nESTE TRIANGULO E EQUILATERO!!\n\n";
		}else{
			if(x==y && x!=z || x==z && y!=x || y==z && y!=x) {
				cout << "\n\nESTE TRIANGULO E ISOSCELES!!\n\n";
			}else{
				cout << "\n\nESTE TRIANGULO E ESCALENO!!\n\n";
			}
		}
	}else{
		cout << "\n\nOs dados os quais voce digitou nao serve para formar um triangulo!!\n\n";
	}
	
	system("pause");
}
