#include<iostream>
#include<string.h>
using namespace std;

/*
Elabore um algoritmo que
- Crie a estrutura tAnimal: Registro tAnimal:
							nome: string 
							raca: string 
							idade: int
- Declare um vetor Animais (50 posições de tAnimal) e cadastre 8 animais;
- Verifique e escreva o nome do animal mais velho;
- Pergunte ao usuário se deseja consultar os animais cadastrados solicitando uma raça para a busca. 
Se ele quiser, leia uma raça e, se existir animal da raça procurada, informe seus dados (nome e 
idade);
*/

struct tAnimal{
	string nome;
	string raca;
	int idade;
};

const int tam=50;
int main(){
	
	tAnimal v[tam];
	string racBusc, nomVelh, aux2;
	int aux, i, maiorIda=0, op;
	
	cout << "-----CADASTRO DE ANIMAL-----";
	for(i=0; i<tam; i++){
		cout << "\n\nDigite o nome do animal: ";
		getline(cin, v[i].nome);
		cout << "\n\nDigite o raca do animal: ";
		getline(cin, v[i].raca);
		cout << "\n\nDigite o nome do animal: ";
		cin >> v[i].idade;
		
		if(maiorIda<v[i].idade){
			maiorIda = v[i].idade;
			nomVelh = v[i].nome;
		}
		if(i==7){
			cout << "\n\nDeseja fazer mais algum cadastro? (1-sim, 0-nao) ";
			cin >> op;
			aux = i;
			if(op==0){
				i = tam;
			}
		}
		getchar();
	}
	cout << "\n\nNome do animal mais velho: " << nomVelh;
	system("pause");
	cout << "\n\nDeseja consultar alguma raca de animal? (1-sim, 0-nao) ";
	cin >> op;
	if(op==1){
		cout << "\nDigite a raca: ";
		getchar();
		getline(cin, racBusc);
		strupr(racBusc);
		cout << "\n\n-----" << racBusc << "-----";
		for(i=0; i<aux; i++){
			if(strlwr(racBusc)==strlwr(v[i].raca)){
				cout << "\n\nNome: " << v[i].nome;
				cout << "\nRaca: " << v[i].raca;
				cout << "\nIdade: " << v[i].idade;
			}
		}
	}else{
		cout << "\n\nCADASTRADOS\n";
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
