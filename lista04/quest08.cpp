#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia dois vetores, A (20 elementos inteiros) e B (20 elementos inteiros), 
e escreva um terceiro vetor C contendo todos os elementos comuns aos dois vetores A e B.
*/

int main(){
	int a[10], b[10], i, n, cont = 0;
	
	cout << "Informe os elementos dos dois vetores\n";
	for(i=0; i<10; i++){
		cout << "\nElemento " << i+1 << " do vetor A: ";
		cin >> a[i];
		cout << "\nElemento " << i+1 << " do vetor B: ";
		cin >> b[i];
	}
	for(i=0; i<10; i++){
		for(n=0; n<10; n++){
			if(a[n]==b[i]){
				cont++;
			}
		}
	}
	if(cont!=0){
		int c[cont];
		cont = 0;
		for(i=0; i<10; i++){
			for(n=0; n<10; n++){
				if(a[n]==b[i]){
					c[cont] = b[i];
					cont++;
				}
			}
		}
		cout << "\n\nEsses sao os elementos comuns dos vetores A e B:";
		for(i=0; i<cont; i++){
			cout << " " << c[i];
		}  
	}else {
		cout << "\n\nNao ha elementos comun entre os dois vetores :(";
	}
	
	
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
	
}

