#include<iostream>
#include<string>
using namespace std;

/*
Suponha que você esteja realizando uma pesquisa e precise obter os seguintes dados de um
conjunto de n pessoas (n é informado pelo usuário): nome, sexo (1-M, 0-F), cor dos olhos,
altura, peso e data de nascimento. Elabore um algoritmo que realize a leitura desses dados
e imprima duas listagens. A primeira listagem deve conter todos os dados (exceto o sexo) das
mulheres e a outra deve conter todos os dados (exceto o sexo) dos homens. Ou seja, vamos
apenas criar uma listagem dos homens e outra das mulheres
*/

struct tPessoas{
	string nome;
	int sexo;
	string olhos;
	float altura;
	float peso;
	string dataNascimento;
};
int main(){
	int n, i;
	
	cout << "Digite com quantas pessoas realizara a pesquisa: ";
	cin >> n;
	getchar();
	
	tPessoas p[n];
	bool flag = true;
	
	system("cls");
	cout << "----CADASTRO PARA PESQUISA----";
	for(i=0;i<n;i++){
		cout << "\n\nNome: ";
		getline(cin, p[i].nome);
		cout << "\nSexo: ";
		cin >> p[i].sexo;
		cout << "\nCor dos olhos: ";
		getchar();
		getline(cin, p[i].olhos);
		cout << "\nAltura: ";
		cin >> p[i].altura;
		cout << "\nPeso: ";
		cin >> p[i].peso;
		cout << "\nData de nascimento: ";
		getchar();
		getline(cin, p[i].dataNascimento);
	}
	
	cout << "\t\n\nULTIMA PESSOA CADASTRADA\n\n";
	system("pause");
	system("cls");
	cout << "----RESULTADO (HOMENS)----";
	for(i=0;i<n;i++){
		if(p[i].sexo==1){
			cout << "\n\nNome: " << p[i].nome;
			cout << "\nCor dos olhos: "<< p[i].olhos;
			cout << "\nAltura: " << p[i].altura;
			cout << "\nPeso: " << p[i].peso;
			cout << "\nData de nascimento: " << p[i].dataNascimento;
		}
	}
	cout << "\n\n";
	system("pause");
	system("cls");
	cout << "----RESULTADO (MULHERES)----";
	for(i=0;i<n;i++){
		if(p[i].sexo==0){
			cout << "\n\nNome: " << p[i].nome;
			cout << "\nCor dos olhos: "<< p[i].olhos;
			cout << "\nAltura: " << p[i].altura;
			cout << "\nPeso: " << p[i].peso;
			cout << "\nData de nascimento: " << p[i].dataNascimento;
		}
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
