#include<iostream>
using namespace std;
	
/*
Escreva um algoritmo que encontre o n-�simo n�mero primo maior que 11, sendo n um n�mero digitado
pelo usu�rio.
*/	
	
int main(){
	
	int n, cont=0, num=12, div, primo = 0;
	
	cout << "Digite qual n-esimo numero primo depois de 11: ";
	cin >> n;
	
	while(cont<n){
		for(div=1; div<=num; div++){
			if(num%div==0){
				primo++;
			}
		}
		if(primo==2){
			cont++; 
		}
		if(cont==n){
			cout << "\nO " << n << "o numero primo depois de 11= " << num;
		}
		num++;
		primo = 0;
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
