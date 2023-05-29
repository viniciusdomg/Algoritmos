#include<iostream>
#include<cmath>
using namespace std;

/*
Calcule as raizes de uma equacao de 2o grau. Observe que:
. x = .b �} �モ/2a, onde �� = B2 . 4ac;
. ax2 + bx + c = 0 representa uma equacao de 2o grau;
. A variavel a tem que ser diferente de zero. Caso seja igual, escreva a mensagem �gNao e equacao de segundo grau�h;
. Se �� < 0, nao existe real. Escreva a mensagem �gNao existe raiz�h;
. Se �� = 0, existe uma raiz real. Escreva a raiz e a mensagem �gRaiz unica�h;
. Se �� . 0, escreva as duas raizes reais.
*/

int main(){
	
	int a, b, c, delta;
	float x;
	
	cout << "Digite o valor de 'A' para a equacao : ";
	cin >> a;
	cout << "Digite o valor de 'B' para a equacao : ";
	cin >>  b;
	cout << "Digite o valor de 'C' para a equacao : ";
	cin >> c;
	
	if(a!=0){
		delta = (b*b)-(4*a*c);
		if(delta<0){
			cout << "\nNao existe raiz\n\n";
		}else if(delta==0){
			x = (-b+delta)/(2*a);
			cout << "\nA raiz da equacao e = " << x << endl;
		}else{
			x = (-b+sqrt(delta))/(2*a);
			cout << "\nA raiz de x1 = " << x << endl;
			x = (-b-sqrt(delta))/(2*a);
			cout << "\nA raiz de x2 = " << x << endl;
		}
	}else{
		cout << "\n\nISSO nao e uma equacao do segundo grau\n\n";
	}
	
	system("pause");
}
