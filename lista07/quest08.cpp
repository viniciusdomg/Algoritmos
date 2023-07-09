#include<iostream>
using namespace std;

/*
Escreva uma função que determine a média e a situação de um aluno em uma
disciplina. A função recebe como parâmetros as três notas de um aluno (p1, p2, e p3),
seu número de faltas (faltas), o número total de aulas da disciplina (aulas) e o ponteiro
para uma variável (media), conforme a seguinte assinatura:
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media); Na
variável indicada pelo ponteiro media, a função deve armazenar a média do aluno,
calculada como a média aritmética das três provas. Além disso, a função deve retornar
um caractere indicando a situação do aluno no curso, definido de acordo com o seguinte
critério:

Número de Faltas		 Média	 			Situação	 	Retorno

Menor ou igual a 25% 	Maior ou igual a	Aprovado 		  A
do total de aulas 		6,0
						
    					Menor que 6,0		Reprovado		  R
						Reprovado
						
Maior que 25% do total  Qualquer			Reprovado		  F
de aulas									por faltas


Em seguida, escreva a função principal de um programa que utiliza a função anterior para
determinar a situação de um aluno. O programa deve:
- Ler do teclado três números reais e dois números inteiros, representando as
notas da p1, p2 e p3, o número de faltas e o número de aulas, respectivamente;
- Chamar a função desenvolvida na primeira questão para determinar a média e a
situação do aluno na disciplina;
- Exibir a média (com apenas uma casa decimal) e a situação do aluno, isto é,
“APROVADO”, “REPROVADO” ou “REPROVADO POR FALTAS”, dependendo do caractere
retornado pela função, conforme a tabela acima.
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
