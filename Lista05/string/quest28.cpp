#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que seja capaz de embaralhar uma string S1 com uma string S2 e colocar o 
resultado em uma string S3. Para embaralhar S1 com S2 preencha os índices pares de S3 com os elementos
de S1 e os ímpares com os elementos de S2 até que os elementos de uma das duas strings termine. Os 
demais elementos de S3 serão preenchidos com os elementos da string restante.
*/

int main(){
	
	string fras1, fras2, texto;
	int i=0, j=0, cont, max, espaco;
	
	cout << "Digite a primeira frase ou palavra: ";
	getline(cin, fras1);
	cout << "Digite a segunda frase ou palavra: ";
	getline(cin, fras2);
	
	max = fras1.length()+fras2.length();
	
	for(cont=0; cont<max; cont++){
		if(i<fras1.length() && j<fras2.length()){
			if(espaco==2){
				texto+=' ';
				espaco=0;
			}
			if(cont%2==0){
				if(fras1[i]==' '){
					i++;
					espaco++;
				}
				texto += fras1[i];
				i++;
			}else{
				if(fras2[j]==' '){
					j++;
					espaco++;
				}
				texto += fras2[j];
				j++;
			}
		}else{
			if(cont>fras2.length()){
				texto += fras1[i];
				i++;
			}else{
				texto += fras2[j];
				j++;
			}
		}
	}
	
	cout << "\n\n\tPrimeira Frase:  " << fras1;
	cout << "\n\tSegunda Frase:   " << fras2;
	cout << "\n\tFrase Embaralhada: " << texto;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
