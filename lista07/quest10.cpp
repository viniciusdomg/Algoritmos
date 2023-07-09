#include<iostream>
using namespace std;

/*
Em seguida, utilizando o algoritmo anterior implemente outra função chamada 
multiplicaEscalar, que recebe como parâmetro dois vetores V1 e V2 (ambos de 
tamanho N), e um número inteiro X. A função deve multiplicar cada um dos 
elementos de V1 por X e armazenar os resultados em V2. A função deve possui 
a seguinte assinatura: void multiplica_escalar(int *v1, int *v2, int x, int n);
No main, utilize as funções inverteVetor e multiplicaEscalar para inverter um vetor 
de tamanho 10 fornecido pelo usuário e em seguida multiplicar esse vetor por um 
escalar também fornecido pelo usuário. Por último, o programa deverá exibir o 
vetor resultante.
*/

int invertedor(int *v1, int *v2, int n);
int multiplica(int x, int *v2, int n);
int main(){
	int n;
	cout << "Qual o tamanho de vetor: ";
	cin >> n;
	system("cls");
	int v1[n], v2[n], i, maior, X;
	cout << "Digite os elementos do vetor\n\n";
	for(i=0; i<n; i++){
		cout << "Elemento " << i+1 << ": ";
		cin >> v1[i]; 
	}
	
	invertedor(v1, v2, n);
	
	cout << "\n\nDigite o numero pelo qual deseja multiplicar o vetor: ";
	cin >> X;
	maior = multiplica(X, v2, n);
	
	cout << "\n\nVetor 1 :";
	for(i=0; i<n; i++){
		cout << " " << v1[i];
	}
	cout << "\nVetor 2 :";
	for(i=0; i<n; i++){
		cout << " " << v2[i] ;
	}
	cout << "\n\nMaior elemento do vetor : " << maior;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}

int invertedor(int *v1, int *v2, int n){
	int i, j = n-1, maior = 0;
	for(i=0; i<n; i++){
		v2[i] = v1[j];
		if(v1[j]>maior){
			maior = v1[j]; 
		}
		j--;
	}
	return maior;
}

int multiplica(int x, int *v2, int n){
	int i, maior = 0;
	for(i=0; i<n; i++){
		v2[i] = v2[i]*x;
		if(v2[i]>maior){
			maior = v2[i]; 
		}
	}
	return maior;
}
