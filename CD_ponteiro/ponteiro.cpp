#include<iostream>
#include<string>
using namespace std;

/*
Create e Delete em uma NOH - String que contem um ponteiro - usando ponteiros. 
*/

struct aluno{
	int matricula;
	float media;
	aluno *endereco;
};

int main(){
	
	int opcao, cont;
	aluno *c, *aux, *inicio, *del, *anteriorDel;
	bool flag = true, achou;
	int matriculado;
	
	do{
		system("cls");
		cout << "----MENU----";
		cout << "\n\n1- Adicionar contato";
		cout << "\n2- Excluir contato";
		cout << "\n3- Fechar execucao";
		cout << "\n\nO que deseja? ";
		cin >> opcao;
		getchar();
		switch(opcao){
			case 1: system("cls"); 
				c = (struct aluno*) malloc(sizeof(struct aluno));
				cout << "Matricula do aluno: ";
				cin >> c->matricula;
				cout << "\nMedia do aluno: ";
				cin >> c->media;
				if(flag){
					inicio = c;
					aux = c;
					c->endereco = NULL;
					flag = false;
				}else{
					aux->endereco = c;
					aux = c;
					c->endereco = NULL;
				}
				cont++;
				cout << "\n\nContato cadastrado com sucesso!!\n\n";
				system("pause");
			break;	
			case 2: system("cls");
				achou = false; 
				if(cont>0){
					cout << "Digite a matricula do aluno que quer deletar: ";
					cin >> matriculado;
					del = inicio;
					do{
						if(matriculado==del->matricula && del->endereco==inicio){
							del = inicio->endereco;
							del->endereco = inicio;
							achou = true;
							cont--;
						}else{
							if(matriculado==del->matricula){
								achou = true;
								anteriorDel->endereco = del->endereco;
								cont--;
							}
						}
						anteriorDel = del;
						del = del->endereco;
					}while(!achou);
					cout << "\n\nALUNO EXCLUIDO COM SUCESSO!!\n\n";
					system("pause");
				}else{
					cout << "\n\nNenhum aluno cadastrado!!\n\n";
					system("pause");
				}	
			break;
			case 3: cout << "\n\nSAINDO\n";
			break;
			default: cout << "\n\nOPCAO INVALIDA!";
		}
	}while(opcao!=3);
	
	system("cls");
	aux = inicio;
	flag = true;
	if(cont>0){
		cout << "----CONTATOS----";
		do{
			if(!flag){
				aux = aux->endereco; 
			}
			cout << "\n\nMatricula: " << aux->matricula;
			cout << "\nMedia: " << aux->media;
			flag = false;
		}while(aux->endereco != NULL);
	}else{
		cout << "\n\tNENHUM ALUNO CADASTRADO!";
	}
	cout << "\n\n\n";
	system("pause");
}
