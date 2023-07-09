#include<iostream>
using namespace std;

/*
Elabore um algoritmo que apresente o menu abaixo e, de acordo com a opção escolhida pelo usuário, 
realize a respectiva operação conforme detalhamento.

-------------------------------------------------------
MENU PRINCIPAL
-------------------------------------------------------
1 - ORDEM
2 - DATA
3 - SALÁRIO
4 - MULTA
5 - CALCULAR
6 - SAIR
-------------------------------------------------------

Opção 1: leia três valores inteiros e um char (‘c’ – crescente, ‘d’ – decrescente), passe-os para 
uma função que deverá ordená-los de acordo com a ordem escolhida e retorná-los para o chamador, 
que deverá escrever o resultado da ordenação.

Opção 2: Declare o registro Data contendo 3 campos inteiros, dia, mês e ano, e leia 5 datas em um 
vetor de datas. Passe o vetor lido para uma função que que deverá verificar e retornar um vetor 
booleano contendo true em cada posição cuja data for válida e false em cada posição que a tada 
não for válida. Considerar meses de 30 e 31, desconsiderar anos bissextos. O chamador, após receber
o resultado da função, deverá escrever uma mensagem de “Data Válida” ou “Data Válida” para cada 
resultado recebido no vetor.
Exemplo: Vetor de Datas: 21/1/2000, 31/12/2012, 45/3/2000, 1/40/2000, 31/02/1999
Saída da função: true, true, false, false, false

Opção 3: leia o salário de uma pessoa e a sua quantidade de filhos e mande-os para uma função. 
A função deverá retornar quanto do salário da pessoa será dedicado a cada um dos seus filhos 
(considerando 10% para cada filho, desde que não exceda o 50% do valor total do salário. Se 
exceder, o valor para cada filho deverá ser 50% do salário dividido pelo total de filhos. O 
chamador deverá informar o valor do salário por filho ou, se a pessoa não tiver filhos, a mensagem 
“O seu salário é 100% para o seu próprio custeio”.

Opção 4: leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava 
dirigindo nela, envie-os para uma função void que deverá calcular se a pessoa vai pagar multa e, se for,
qual o valor da multa. Considere que serão pagos como multa: a) 50 reais se o motorista ultrapassar em 
até 10km/h a velocidade permitida (ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h); 
b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida. c) 200 reais, se estiver
acima de 31km/h da velocidade permitida. A mensagem informando o valor da multa deverá ser escrita pelo 
chamador após a execução da função.

Opção 5: leia o gabarito correto de uma prova e o gabarito de um aluno em uma matriz 2x10 (10 respostas 
do gabarito na primeira linha da matriz e 10 repostas do aluno na segunda linha da matriz) e envie para 
uma função. A função deverá calcular e retornar o percentual de acerto do aluno na prova (int) e a sua 
nota (float), considerando que cada questão vale 1,5 ponto. Escreva os resultados retornados pela função.

Opção 6: Escreva a mensagem “Fim de Programa” e encerre o algoritmo.
*/

struct data{
	int dia;
	int mes;
	int ano;
};

void Menu();
void Ordenar(int *valor1, int *valor2, int *valor3, char ord);
bool Data(int dia, int mes, int ano, int i, bool *v);

int main(){
	
	int opcao, v1, v2, v3, i;
	
	do{
		Menu();
		cout << "\n\n>> ";
		cin >> opcao;
		if(opcao!=6){
			system("cls");
		}
		switch(opcao){
			case 1: char ordem;
					cout << "Digite os 3 valores: ";
					cin >> v1 >> v2 >> v3;
					cout << "\nEm qual ordem deseja organizar? (c-crescente, d-decrescente) ";
					cin >> ordem;
					Ordenar(&v1, &v2, &v3, ordem);
					cout << "\nOrdenando!!";
					cout << "\n\n\t" << v1 << ", " << v2 << ", " << v3 << "\n\n"; 
					system("pause");
				break;
			case 2: data d[5];
					bool v[5];
					cout << "\t---Data---";
					for(i=0;i<5;i++){
						cout << "\nDia: ";
						cin >> d[i].dia;
						cout << "\nMes: ";
						cin >> d[i].mes;
						cout << "\nAno: ";
						cin >> d[i].ano;
					}
					cout << "\n";
					for(i=0;i<5;i++){
						Data(d[i].dia, d[i].mes, d[i].ano, i, v);
						if(v[i]){
							cout << "True  ";
						}else{
							cout << "False  ";
						}
					}
					cout << "\n\n";
					system("pause");
				break;
			case 3: 
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
			default: cout << "\n\nFIM DO PROGRAMA\n";
		}
	}while(opcao!=6);
	
	system("pause");
}

void Menu(){
	system("cls");
	cout << "-----------------------------\n";
	cout << "\tMENU PRINCIPAL";
	cout << "\n-----------------------------";
	cout << "\n1- Ordem\n2- Data\n3- Salario\n4- Multa\n5- Calcular\n6- Sair";
	cout << "\n-----------------------------";
}

void Ordenar(int *valor1, int *valor2, int *valor3, char ord){
	int aux;
	if(ord=='c'){
		if(*valor1>*valor2){
			aux = *valor1;
			*valor1 = *valor2;
			*valor2 = aux;
		}
		if(*valor1>*valor3){
			aux = *valor1;
			*valor1 = *valor3;
			*valor3 = aux;
		}
		if(*valor2>*valor3){
			aux = *valor2;
			*valor2 = *valor3;
			*valor3 = aux;
		}
	}else{
			if(*valor1<*valor2){
			aux = *valor1;
			*valor1 = *valor2;
			*valor2 = aux;
		}
		if(*valor1<*valor3){
			aux = *valor1;
			*valor1 = *valor3;
			*valor3 = aux;
		}
		if(*valor2<*valor3){
			aux = *valor2;
			*valor2 = *valor3;
			*valor3 = aux;
		}	
	}
}

bool Data(int dia, int mes, int ano, int i, bool *v){
	if(mes%2!=0 && mes<13 && mes>0 || mes==8){
		if(dia>0&&dia<32 && ano>0 && ano<2024){
			v[i] = true;
		}else{
			v[i] = false;
		}
	}else if(mes%2==0 && mes<13 && mes>0 || mes==9){
		if(dia>0&&dia<31 && ano>0 && ano<2024){
			v[i] = true;
		}else{
			v[i] = false;
		}
	}else{
		v[i] = false;
	}
}
