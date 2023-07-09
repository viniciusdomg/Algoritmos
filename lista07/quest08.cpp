#include<iostream>
using namespace std;

/*
Escreva uma fun��o que determine a m�dia e a situa��o de um aluno em uma
disciplina. A fun��o recebe como par�metros as tr�s notas de um aluno (p1, p2, e p3),
seu n�mero de faltas (faltas), o n�mero total de aulas da disciplina (aulas) e o ponteiro
para uma vari�vel (media), conforme a seguinte assinatura:
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media); Na
vari�vel indicada pelo ponteiro media, a fun��o deve armazenar a m�dia do aluno,
calculada como a m�dia aritm�tica das tr�s provas. Al�m disso, a fun��o deve retornar
um caractere indicando a situa��o do aluno no curso, definido de acordo com o seguinte
crit�rio:

N�mero de Faltas		 M�dia	 			Situa��o	 	Retorno

Menor ou igual a 25% 	Maior ou igual a	Aprovado 		  A
do total de aulas 		6,0
						
    					Menor que 6,0		Reprovado		  R
						Reprovado
						
Maior que 25% do total  Qualquer			Reprovado		  F
de aulas									por faltas


Em seguida, escreva a fun��o principal de um programa que utiliza a fun��o anterior para
determinar a situa��o de um aluno. O programa deve:
- Ler do teclado tr�s n�meros reais e dois n�meros inteiros, representando as
notas da p1, p2 e p3, o n�mero de faltas e o n�mero de aulas, respectivamente;
- Chamar a fun��o desenvolvida na primeira quest�o para determinar a m�dia e a
situa��o do aluno na disciplina;
- Exibir a m�dia (com apenas uma casa decimal) e a situa��o do aluno, isto �,
�APROVADO�, �REPROVADO� ou �REPROVADO POR FALTAS�, dependendo do caractere
retornado pela fun��o, conforme a tabela acima.
*/

char Situacao(float n1, float n2, float n3, int f, int aulas, float *media);

int main(){
	
	float n1, n2, n3, media;
	int  falta, aulas;
	char situacao;
	
	cout << "Digite as tres notas do aluno: ";
	cin >> n1 >> n2 >> n3;
	cout << "\nQuantas aulas foram ministradas? ";
	cin >> aulas;
	cout << "\nQuantas faltas o aluno tem? ";
	cin >> falta;
	
	situacao = Situacao(n1, n2, n3, falta, aulas, &media);
	
	if(situacao=='F'){
		cout << "\n\nAluno REPROVADO POR FALTA!!";
	}else if(situacao=='R'){
		cout << "\n\nAluno REPROVADO por media!!";
	}else{
		cout << "\n\nAluno APROVADO por media!!";
	}
	
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
}

char Situacao(float n1, float n2, float n3, int f, int aulas, float *media){
	float med;
	med = (n1+n2+n3)/3;
	if(aulas*0.25<=f){
		return 'F';
	}else if(med<6){
		return 'R';
	}else if(med>6){
		return 'A';
	}
	*media = med;
}
