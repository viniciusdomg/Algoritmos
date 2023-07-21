#include<iostream>
using namespace std;

/*
Elabore um algoritmo que apresente o menu abaixo e, de acordo com a op��o escolhida pelo usu�rio, 
realize a respectiva opera��o conforme detalhamento.

-------------------------------------------------------
MENU PRINCIPAL
-------------------------------------------------------
1 - ORDEM
2 - DATA
3 - SAL�RIO
4 - MULTA
5 - CALCULAR
6 - SAIR
-------------------------------------------------------

Op��o 1: leia tr�s valores inteiros e um char (�c� � crescente, �d� � decrescente), passe-os para 
uma fun��o que dever� orden�-los de acordo com a ordem escolhida e retorn�-los para o chamador, 
que dever� escrever o resultado da ordena��o.

Op��o 2: Declare o registro Data contendo 3 campos inteiros, dia, m�s e ano, e leia 5 datas em um 
vetor de datas. Passe o vetor lido para uma fun��o que que dever� verificar e retornar um vetor 
booleano contendo true em cada posi��o cuja data for v�lida e false em cada posi��o que a tada 
n�o for v�lida. Considerar meses de 30 e 31, desconsiderar anos bissextos. O chamador, ap�s receber
o resultado da fun��o, dever� escrever uma mensagem de �Data V�lida� ou �Data V�lida� para cada 
resultado recebido no vetor.
Exemplo: Vetor de Datas: 21/1/2000, 31/12/2012, 45/3/2000, 1/40/2000, 31/02/1999
Sa�da da fun��o: true, true, false, false, false

Op��o 3: leia o sal�rio de uma pessoa e a sua quantidade de filhos e mande-os para uma fun��o. 
A fun��o dever� retornar quanto do sal�rio da pessoa ser� dedicado a cada um dos seus filhos 
(considerando 10% para cada filho, desde que n�o exceda o 50% do valor total do sal�rio. Se 
exceder, o valor para cada filho dever� ser 50% do sal�rio dividido pelo total de filhos. O 
chamador dever� informar o valor do sal�rio por filho ou, se a pessoa n�o tiver filhos, a mensagem 
�O seu sal�rio � 100% para o seu pr�prio custeio�.

Op��o 4: leia a velocidade m�xima permitida em uma avenida e a velocidade com que o motorista estava 
dirigindo nela, envie-os para uma fun��o void que dever� calcular se a pessoa vai pagar multa e, se for,
qual o valor da multa. Considere que ser�o pagos como multa: a) 50 reais se o motorista ultrapassar em 
at� 10km/h a velocidade permitida (ex.: velocidade m�xima: 50km/h; motorista a 60km/h ou a 56km/h); 
b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida. c) 200 reais, se estiver
acima de 31km/h da velocidade permitida. A mensagem informando o valor da multa dever� ser escrita pelo 
chamador ap�s a execu��o da fun��o.

Op��o 5: leia o gabarito correto de uma prova e o gabarito de um aluno em uma matriz 2x10 (10 respostas 
do gabarito na primeira linha da matriz e 10 repostas do aluno na segunda linha da matriz) e envie para 
uma fun��o. A fun��o dever� calcular e retornar o percentual de acerto do aluno na prova (int) e a sua 
nota (float), considerando que cada quest�o vale 1,5 ponto. Escreva os resultados retornados pela fun��o.

Op��o 6: Escreva a mensagem �Fim de Programa� e encerre o algoritmo.
*/

struct data{
	int dia;
	int mes;
	int ano;
};

void Menu();
void Ordenar(int *valor1, int *valor2, int *valor3, char ord);
bool Data(int dia, int mes, int ano, int i, bool *v);
void Custeio(float salario, int qtdF);
void Multa(int kmA, int kmM);
float Prova(char matriz[][10], int *acerto);

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
			case 3: float salario;
					salario = 10;
					do{
						if(salario<10){
							system("cls");
							cout << "Digite um salario valido e maior que 10\n\n";						
						}
						cout << "Digite o seu salario: ";
						cin >> salario;
					}while(salario<10);
					v1=0;
					do{	
						if(v1<0){
							cout << "\nPor favor digite uma quantidade de filhos valida ";
						}
						cout << "\nDigite quantos filhos voce tem? ";
						cin >> v1;
					}while(v1<0);
					Custeio(salario, v1);
					system("pause");
				break;
			case 4: int kmAvenida, kmMotorista;
					kmAvenida = 20; 
					kmMotorista = 0;
					do{
						if(kmAvenida<20){
							system("cls");
							cout << "Informe uma quilometragem valida e acima de 20km\n\n";
						}
						cout << "Qual a quilometragem permitada da avenida? ";
						cin >> kmAvenida;
					}while(kmAvenida<20);
					do{
						if(kmMotorista<0){
							system("cls");
							cout << "Digite uma quilometragem valida!!\n\n";
						}
						cout << "Quantos km/h estava o motorista? ";
						cin >> kmMotorista;
					}while(kmMotorista<0);
					Multa(kmAvenida, kmMotorista);
					system("pause");
				break;
			case 5: char gabarito[2][10];
					int acerto, l;
					acerto = 0;
					float nota;
					for(i=0;i<2;i++){
						if(i==1){
							system("cls");
							cout << "Agora e o gabarito do aluno!\n";
						}
						for(l=0;l<10;l++){
							cout << "\nQuestao " << l+1 << ": ";
							cin >> gabarito[i][l];
						}	
					}
					nota = Prova(gabarito, &acerto);
					cout << "\n\nNota do aluno na prova: " << nota;
					cout << "\nAcertou " << acerto*10 << "% das questoes!!\n\n";
					system("pause");
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

void Custeio(float salario, int qtdF){
	if(qtdF==0){
		cout << "\n\nO seu salario e 100% para custeio proprio!!";
	}else if(qtdF>5){
		salario = salario*0.5;
		salario = salario/qtdF;
		cout << "\n\nSalario para cada filho = " << salario;		
	}else{
		salario = salario*(0.1*qtdF);
		cout << "\n\nSalario destinado aos filhos = " << salario;
		salario /= 3;
		cout << "\nSalario para cada filho = " << salario;
	}
	cout << "\n\n";
}

void Multa(int kmA, int kmM){
	if(kmM<=kmA){
		cout << "\n\nO motorista estava em uma velocidade permitida!!";
	}else if(kmM>kmA && kmM<=kmA+10){
		cout << "\n\nO motorista estava acima da velocidade, deve pagar 50R$ de multa!!";
	}else if(kmM>kmA+11 && kmM<=kmA+30){
		cout << "\n\nO motorista estava acima da velocidade, deve pagar 100R$ de multa!!";
	}else {
		cout << "\n\nO motorista estava acima da velocidade, deve pagar 200R$ de multa!!";
	}
	cout << "\n\n";	
}

float Prova(char matriz[][10], int *acerto){
	int i, l;
	float nota=0;
	for(i=0; i<1; i++){
		for(l=0;l<10;l++){
			if(matriz[i][l] == matriz[1][l]){
				*acerto += 1;
				nota += 1.5;	
			}		
		}
	}
	return nota;
}
