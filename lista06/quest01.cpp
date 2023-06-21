#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome, endereço e média 
geral. Após o preenchimento, deve ser somado o valor 0,5 às médias de todos os alunos que tiveram 
médias maiores que 5. Em seguida escreva o vetor final.
*/

struct alunos{
	int matricula;
	string nome;
	string endereco;
	float media;
};

const int tam=10;
int main(){
	
	alunos a[tam];
	int i;
	
	cout << "-----Cadastro do Aluno e sua Media-----";
	
	for(i=0; i<tam; i++){
		cout << "\n\nAluno - " << i+1;
		cout << "\n\nDigite a matricula do aluno: ";
		cin >> a[i].matricula;
		getchar();
		cout << "\nDigite o nome do aluno: ";
		getline(cin, a[i].nome);
		cout << "\nDigite o endereco do aluno: ";
		getline(cin, a[i].endereco);
		cout << "\nDigite a media desse aluno: ";
		cin >> a[i].media;
		
		if(a[i].media>5){
			a[i].media += 0.5;
		}
	}
	
	cout << "\n\n-----REGISTROS-----"
	for(i=0; i<tam; i++){ 
		cout << "\n\nMatricula: " << a[i].matricula;
		cout << "\nNome : " << a[i].nome;
		cout << "\nEndereco: " << a[i].endereco;
		cout << "\nMedia: " << a[i].media;
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
