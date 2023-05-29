#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um número inteiro e escreva o seu fatorial. 
Ex.: Fatorial de 4 = 4! = 4 X 3 X 2 X 1 = 24. Após o fatorial, verifique e escreva o próximo 
número divisível pelo número digitado.
*/

int main(){
	
	int fatorial, result=1, num, cont;
	bool flag=true;
	
	cout << "Digite o numero que deseja saber o fatorial: ";
	cin >> fatorial;
	
	for(cont=0; cont<fatorial; cont++){
		result *= (fatorial-cont);
	}
	cout << "\nFatorial de " << fatorial << " = " << result;
	num = fatorial;
	while(flag==true){
		num++;
		if(num%fatorial==0){
			flag=false;
		}
	}
	cout << "\nO proximo divisor de " << fatorial << " = " << num;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
