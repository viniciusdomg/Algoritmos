#include<iostream>
using namespace std;

/*
15. Considerando uma lista encadeada de valores inteiros definida pela struct abaixo: struct noh{
int valor; lista *pr�ximo;
};
Noh meuNoh;
Elabore um algoritmo que apresente o menu abaixo e execute as opera��es de acordo com a escolha do usu�rio.
-------------------------------------------------------
MENU PRINCIPAL
-------------------------------------------------------
1 � ADICIONAR ELEMENTO
2 � REMOVER ELEMENTO
3 � MOSTRAR TODOS OS ELEMENTOS
4 � SAIR
-------------------------------------------------------
Op��o 1: o algoritmo dever� ler um elemento inteiro, inseri-lo em um novo noh e adicion�-lo no fim da 
lista utilizando a fun��o adicionar que deve ser elaborada. 
Op��o 2: o algoritmo dever� ler um elemento inteiro, busca-lo na lista e, caso seja encontrado, remov�-lo 
utilizando a fun��o remover que deve ser elaborada.
Op��o 3: o algoritmo dever� exibir todos os elementos da lista utilizando a fun��o relatorio que deve ser elaborada.
*/

struct noh{
	int valor;
	noh *proximo;
};

void Adicionar(noh *registro, noh *aux, bool flag, int valor);
bool Remover(noh *inicio, int valor, bool achou);
void Lista(noh *inicio);

int main(){
	noh *value, *aux, *inicio, *auxDel;
	int opcao, valor, cont=0;
	bool nExiste=true, achou=false;
	do{
		system("cls");
		cout << "\t---------MENU---------";
		cout << "\n\n1 - Adicionar\n2 - Remover\n3 - Listar\n4 - Sair\n";
		cout << "\n >> ";
		cin >> opcao;
		if(opcao!=4){
			system("cls");
		}
		switch(opcao){
			case 1: value = (struct noh*) malloc(sizeof(struct noh));
					cout << "Digite um valor: ";
					cin >> valor;
					Adicionar(value, aux, nExiste, valor);
					aux = value;
					if(nExiste){
						inicio = value;
						nExiste = false;
					}
						
					cout << "\n\n\tValor adicionado!!\n\n";
					cont++;
					system("pause");
				break;
			case 2: if(!nExiste){
						cout << "Digite um valor para remocao: ";
						cin >> valor;
						achou = Remover(inicio, valor, achou);
						if(achou){
							cout << "\n\nRemocao realizado com SUCESSO!!";
							cont--;
						}else{
							cout << "\nNao ha nenhum valor igual a esse para remover :(";
						}
					}else{
						cout << "Nenhum valor cadastrado!!";
					}
					cout << "\n\n";
					system("pause");
				break;
			case 3: if(!nExiste){
						cout << "-----Valores Cadastrados-----\n";
						Lista(inicio);
					}else{
						cout << "\nNao ha nenhum valor adicionado a lista";
					}
					cout << "\n\n\n";
					system("pause");
				break;
			case 4: 
			default: cout << "\n\nFIM DO PROGRAMA\n";
		}
	}while(opcao!=4);
	system("pause");
}

void Adicionar(noh *registro, noh *aux, bool flag, int valor){
	registro->valor = valor;
	if(flag){
		registro->proximo = NULL;
	}else{
		aux->proximo = registro;
		registro->proximo = NULL;
	}
}

bool Remover(noh *inicio, int valor, bool achou){
	noh *del, *auxDel;
	del = inicio;

	do{
		if(del->valor==valor && del==inicio){
			del = inicio->proximo;
			inicio = del;
			achou = true;
		}else if(del->valor==valor){
			auxDel->proximo = del->proximo;
			achou = true;
		}
		auxDel = del;
		del = del->proximo;
	}while(!achou);
	return achou;
}

void Lista(noh *inicio){
	int cont=0;
	noh *aux;
	aux = inicio;
	do{
		if(cont!=0){
			aux = aux->proximo;
		}
		cout << "\nValor " << cont+1 << ": " << aux->valor;
		cont++;
	}while(aux->proximo!=NULL);
}
