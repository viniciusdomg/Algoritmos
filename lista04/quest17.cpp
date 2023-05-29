#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor ORIGINAL de 20 posições de inteiro, verifique e informe se
os seus elementos estão em ordem crescente, ordem decrescente ou ordem aleatória.
*/

const int tam=5;

int main(){
	
	int n[tam], i, j, cont=0;
	bool cresc = false, dec=false;
	
	cout << "Digite os elementos do vetor em sequencia: ";
	for(i=0; i<tam; i++){
		cin >> n[i];
	}
	
	for(i=0; i<tam-1; i++){
		if(n[i+1]>n[i]){
			cresc = true;
		}
		if(n[i+1]<n[i]){
			dec = true;
		}
		if(n[i+1]==n[i]){
			cont++;
		}		
	}
	
	if(cont==tam-1){
		cout << "\n\tO vetor tem todos os elementos iguais\n\n";
	}else if(!dec){
		cout << "\n\tO vetor e crescente\n\n";
	}else if(!cresc){
		cout << "\n\tO vetor e decrescente\n\n";
	}else if(cresc && dec){
		cout << "\n\tO vetor esta em ordem aleatorio\n\n";
	}
	
	system("pause");
}
