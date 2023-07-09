#include<iostream>
#include<string>
using namespace std;

/*
11. Elabore um algoritmo que:
- Crie o registro tAluno:
Registro tAluno:
nome: string
matriculaDoAluno: int
- Declare um vetor Alunos (3 posições de tAluno) e cadastre 3 alunos no vetor Alunos;
- Após o cadastro, escreva os dados de todos os alunos cadastrados;
- Crie o registro tDisciplina:
Registro tDisciplina: 
matriculaDoAluno: int 
disciplina: string
nota1: float 
nota2: float 
media: float  
 
Obs: o usuário não deverá digitar o valor do campo media. O sistema deverá calcular automaticamente a média 
aritmética das duas notas do aluno e armazenar neste campo. 

- Crie o vetor Disciplinas (12 posições de tDisciplina) e cadastre, para cada um dos 3 alunos existentes no vetor 
Alunos, 4 disciplinas com as respectivas informações. Lembre-se que a matrícula do aluno tem que ser a mesma 
cadastrada no vetor Alunos.
- Informe o seguinte menu e proceda com a operação de acordo com a escolha do usuário:
MENU PRINCIPAL
----------------------------------------------
1 – EXIBIR DADOS DE UM ALUNO
2 – EXIBIR MAIOR MEDIA
3 – EXIBIR MÉDIA DAS MÉDIAS POR ALUNO
4 – EXIBIR OS ALUNOS DE UMA DISCIPLINA
5 – SAIR DO SISTEMA
- Se o usuário escolher a opção 1, pergunte qual a matrícula do aluno que ele deseja consultar. Depois que ele 
informar, procure a matrícula procurada no vetor Alunos. Se existir, mostre o nome do aluno. Em seguida, procure 
no vetor Disciplinas pelos dados daquele aluno e mostre os três resultados.
- Se o usuário escolher a opção 2, procure no vetor notas qual a matrícula do aluno que possui maior média e 
escreva A DISCIPLINA E O NOME DO ALUNO.
- Se o usuário escolher a opção 3, mostre a média das médias por ALUNO, informando o nome do aluno e a média 
aritmética de suas médias.
- Se o usuário escolher a opção 4, pergunte qual a disciplina que ele deseja consultar. Depois que ele informar, 
procure e mostre todos os nomes dos alunos daquela disciplina. 
- Se o usuário escolher 5, finalize o sistema.
*/

struct tAluno{
	string nome;
	int matricula;
};

struct tDisciplina{
	int matricula;
	string disciplina;
	float nota1;
	float nota2;
	float media;
};

int main(){
	
	tAluno aluno[3];
	tDisciplina disciplina[12];
	int i, j, cont1=0, cont2=0, cont3=0, opcao, matAux;
	float maior;
	bool existe, cheio;
	string consulta;
	
	cout << "----CADASTRAR ALUNO----";
	for(i=0;i<3;i++){
		cout << "\n\nNome: ";
		getline(cin, aluno[i].nome);
		cout << "\nMatricula: ";
		cin >> aluno[i].matricula;
		getchar();
	}
	cout << "\n\nALUNOS CADASTRADOS!!\n\n";
	system("pause");
	system("cls");
	cout << "----CADASTRAR DISCIPLINA----";
	for(i=0;i<12;i++){
		do{	
			existe =  false;
			cheio = false;
			cout << "\n\nMatricula do aluno que deseja atribuir a disciplina: ";
			cin >> disciplina[i].matricula;
			for(j=0;j<3;j++){
				if(disciplina[i].matricula==aluno[j].matricula){
					existe = true;
					if(j==0){
						cont1++;
					}else if(j==1){
						cont2++;
					}else{
						cont3++;
					}
				}
			}
			if(cont1>4){
				cheio = true;
			}else if(cont2>4){
				cheio  = true;
			}else if (cont3>4){
				cheio = true;
			}
		}while(cheio && !existe);
		cout << "\nDisciplina: ";
		getchar();
		getline(cin, disciplina[i].disciplina);
		cout << "\n1a Nota: ";
		cin >> disciplina[i].nota1;
		cout << "\n2a Nota: ";
		cin >> disciplina[i].nota2;
		disciplina[i].media = (disciplina[i].nota1+disciplina[i].nota2)/2;
	}
	
	cout << "\n\nDISCIPLINAS CADASTRADAS!!\n\n";
	system("pause");
	
	do{
		system("cls");
		cout << "--------------------------";
		cout << "\n1 – EXIBIR DADOS DE UM ALUNO";
		cout << "2 – EXIBIR MAIOR MEDIA";
		cout << "3 – EXIBIR MÉDIA DAS MÉDIAS POR ALUNO";
		cout << "4 – EXIBIR OS ALUNOS DE UMA DISCIPLINA";
		cout << "5 – SAIR DO SISTEMA";
		cout << "\n\n>> ";
		cin >> opcao;
		system("cls");
		
		switch(opcao){
			case 1: cout << "Digite a matricula do aluno que deseja consultar: ";
					cin >> matAux;
				for(i=0;i<3;i++){
					if(matAux==aluno[i].matricula){
						cout << "\n\nAluno: " << aluno[i].nome;
						for(j=0;j<12;j++){
							if(matAux==disciplina[j].matricula){
								cout << "\nDisciplina: " << disciplina[j].disciplina;
								cout << "\n\t1a nota: " << disciplina[j].nota1;
								cout << "\n2a nota: " << disciplina[j].nota2;
								cout << "\nMedia: " << disciplina[j].media;
							}
						}
					}
				}
				cout < "\n\n";
				system("pause");
			break;
			
			case 2: maior=0;
				for(i=0;i<12;i++){
					if(disciplina[i].media>maior){
						maior = disciplina[i].media;
						matAux = disciplina[i].matricula;
					}
				}
				cout << "Matricula: " << matAux;
				for(i=0;i<3;i++){
					if(matAux==aluno[i].matricula){
						cout << "\nAluno: " << aluno[i].nome;
					}
				}
				for(i=0;i<12;i++){
					if(disciplina[i].matricula==matAux && disciplina[i].media==maior){
						cout << "\nDisciplina: " << disciplina[i].disciplina;
					}
				}
				cout < "\n\n";
				system("pause");
			break;
			
			case 3: maior=0; 
				for(i=0;i<3;i++){
					cout << "Aluno: " << aluno[i].nome;
					for(j=0;j<12;j++){
						if(aluno[i].matricula==disciplina[j].matricula){
							maior += disciplina[j].media;
						}
					}
					cout << "\nMedia das medias: " << maior/4;	
					cout << "\n\n";			
				}
				cout < "\n\n";
				system("pause");
			break;
			
			case 4: cout << "Deseja saber a quantidade de integrantes de qual disciplina: ";
				getline(cin, consulta);
				for(j=0;j<12;j++){
					if(consulta==disciplina[j].disciplina){
						for(i=0;i<3;i++){
							if(disciplina[j].matricula==aluno[i].matricula){
								cout << "Aluno: " << aluno[i].nome;
							}
						}
					}
				}
				cout < "\n\n";
				system("pause");
			break;
			case 5: 
				break;
			default : cout << "\n\n\tDIGITE UMA OPCAO EXISTENTE!!";
		}
	}while(opcao!=5);
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");	
}
