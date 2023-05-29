#include <iostream>
using namespace std;

/*
Elabore um algoritmo que:
Solicite um número inteiro N ao usuário.
Declare um vetor V com N elementos inteiros.
Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao 
dobro do anterior. 
Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo
menor elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário. 
Mostre o vetor antes e depois da mudança.
*/

int main(){
	int j, num, i, aux, x;
	char opcao;
	bool teste = false;
	
	cout << "Digite quantos espacos tera o vetor: ";
	cin >> num;
	
	int v[num];
	
	cout << "\nDigite um numero inteiro em que o vetor vai se basear: ";
	cin >> v[0];
	for(i=1; i<num; i++){
		v[i] = v[i-1]*2;
	}
	
	aux = v[0];
	cout << "\nDigite um numero inteiro para ve se tem no vetor: ";
	cin >> x;
	for(i=0; i<num; i++){		
		if(v[i]==x){
			v[0] = x;
			v[i] = aux;
			teste = true;
		}
	}
	
	if(!teste){
		cout << "\n\nNao existe um numero do vetor igual a " << x;
	}
	
	cout << "\n\n\t";
	for(i=0; i<num ; i++){
		cout << v[i] << " ";
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
