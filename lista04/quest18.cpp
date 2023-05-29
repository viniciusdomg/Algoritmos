#include<iostream>
using namespace std;

/*
Elabore um algoritmo que declare dois vetores A e B de 10 elementos de inteiros, leia os seus 
elementos e intercale os dois vetores A e B formando o vetor C (de 20 elementos).
*/

int main(){
	
	int a[10], b[10], c[20], i, j=0;
	
	cout << "Digite os elementos do vetor A: ";
	for(i=0; i<10; i++){
		cin >> a[i];
	}
	cout << "\nDigite os elementos do vetor B: ";
	for(i=0; i<10; i++){
		cin >> b[i];
	}
	
	for(i=0; i<20; i++){
		
		if(i%2!=0){
			c[i] = b[j];
			j++;	
		}else if(i%2==0){
			c[i] = a[j];
		}
	}
	
	cout << "\nElementos do vetor C: \n\t";
	for(i=0;i<20; i++){
		cout << c[i] << " ";
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
