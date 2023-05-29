#include<iostream>
using namespace std;

/*
Escreva um algoritmo que conte de 100 a 999 (inclusive) e exiba, um por linha, o produto dos tr�s 
d�gitos dos n�meros. Por exemplo, inicialmente o programa ir� exibir:
100 = 0 (1*0*0)
101 = 0 (1*0*1)
102 = 0 (1*0*2)
(...)
110 = 0 (1*1*0)
111 = 1 (1*1*1)
112 = 2 (1*1*2)
(...)
999 = 9*9*9=729
Fa�a o seu algoritmo dar uma pausa a cada 20 linhas para que seja poss�vel ver todos os n�meros 
pouco a pouco. Solicite que seja pressionada alguma tecla para ver a pr�xima sequ�ncia de n�meros.
*/

int main(){
	
	int num = 100, digito, cont=1;
	
	while(num<=999){
		digito = num/100;
		digito *= ((num%100)/10);
		digito *= ((num%100)%10);
		cout << num << "= " << digito;
		cout << "\n";
		if(cont%20==0){
			system("pause");
			cout<< "\n";
		}
		cont++;
		num++;
	}
	
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
}
