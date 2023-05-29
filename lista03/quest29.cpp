#include<iostream>
using namespace std;

/*
Fa�a um algoritmo que leia v�rios conjuntos de tr�s valores inteiros e, para cada conjunto, uma 
ordem (1-crescente, 2-decrescente ou 3-aleat�rio). Para cada conjunto de n�meros lido, o 
algoritmo deve mostrar os n�meros na ordem solicitada. O algoritmo encerra quando o conjunto 
digitado for composto de tr�s valores iguais a �0�. Considere que a ordem aleat�ria � qualquer 
ordem que n�o seja crescente e nem decrescente.
*/

int main(){
	
	int v1. v2, v3, ordem;
	
	cout << "Informe os numeros do conjunto e a ordem que deseja mostrar!";
	cout << "\n!!PARA ENCERRAR BASTA DIGITAR OS 3 VALORES IGUAL A 0\n";
	cout << "---------------------------------------------------\n"
	do{
		cout << "\nElemento 1: ";
		cin >> v1;
		cout << "\nElemento2: ";
		cin >> v2;
		cout << "\nElemento3: ";
		cin >> v3;
		cout << "\nInforme qual ordem deseja mostrar o conjunto (1-crescente, 2-decrescente, 3-aleatoria): ";
		cin >> ordem;
		
		switch(ordem){
			case 1: if(v1<v2 && v2<v3){
					cout << "\n\t" << v1 << " " <<  v2 << " " <<  v3;
				}else if(v2<v1 && v1<v3){
					cout << "\n\t" <<  v2 << " " <<  v1 << " " <<  v3; 
				}else if(v3<v2 && v2<v1){
					cout << "\n\t" <<  v3 << " " <<  v2 << " " <<  v1;
				}else if(v3<v1 && v1<v2){
					cout << "\n\t" <<  v3 << " " <<  v1 << " " <<  v2;
				}else if (v1<v3 && v3<v2){
					cout << "\n\t" <<  v1 << " " <<  v3 << " " <<  v2;	
				}else if(v2<v3 && v3<v1){
					cout << "\n\t" <<  v2 << " " <<  v3 << " " <<  v1;
				}
				break;			
			case 2: if(v1>v2 && v2>v3){
					cout << "\n\t" << v1 << " " <<  v2 << " " <<  v3;
				}else if(v1>v3 && v3>v2){
					cout << "\n\t" << v1 << " " <<  v3 << " " <<  v2;
				}else if(v2>v1 && v1>v3){
					cout << "\n\t" << v2 << " " <<  v1 << " " <<  v3;
				}else if(v2>v3 && v3>v1){
					cout << "\n\t" << v2 << " " <<  v3 << " " <<  v1;
				}else if(v3>v2 && v2>v1){
					cout << "\n\t" << v3 << " " <<  v2 << " " <<  v1;
				}else if(v3>v1 && v1>v2){
					cout << "\n\t" << v3 << " " <<  v1 << " " <<  v2;
				}
				break;
			case 3: if(v1<v2 && v2<v3){
					cout << "\n\t" << v2 << " " << v1 << " " << v3;
				}else if(v1>v2 && v2>v3){
					cout << "\n\t" << v3 << " " << v1 << " " << v2;
				}else {
					cout << "\n\t" << v1 << " " << v2 << " " << v3;
				}
				break;
			default : cout << "\n\tEscolha umas das ordens descritas!";
		}
	}while(v1!=0 && v2!=0 && v3!=0);
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
