#include <iostream>
using namespace std;

/*Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. 
Se eles não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
• Equiláteros: tem os comprimentos dos três lados iguais;
• Isósceles: tem os comprimentos de dois lados iguais; • Escaleno: tem os comprimentos dos três
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
