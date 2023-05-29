#include<iostream>
using namespace std;

/*
Elabore um algoritmo que gere automaticamente um vetor de 30 elementos contendo a sequencia de
números inteiros escolhida pelo usuário no menu abaixo:
				Menu Principal	
------------------------------------------------------
1 - Sequência de Fibonacci
2 - Números Triangulares
3 - Números Primos
4 - Números Quadrangulares
5 - Divisíveis por 3 e 5 simultaneamente
6 - Sair
*/

const int tam = 5;
int main(){
	
	int cont, n[tam], i, j, op, soma=0, p=1, div=0;
	
	for(i=0; i<tam; i++){
		n[i] = 0;
	}
	
	do{
		system("cls");
		cout << "\n\t\tMENU PRINCIPAL\n---------------------------------------------------------";	
		cout << "\n\t1 - Sequencia de Fibonacci ";
		cout << "\n\t2 - Numeros Triangulares ";
		cout << "\n\t3 - Numeros Primos ";
		cout << "\n\t4 - Numeros Quadrangulares ";
		cout << "\n\t5 - Divisiveis 3 e 5 simultaneamente ";
		cout << "\n\t6 - Sair ";
		
		cout << "\n\nDigite a opcao que deseja para ser o valor do vetor: ";
		cin >> op;
		
		switch(op){
			case 1: for(i=0; i<tam; i++){
					if(i==0){
						n[i] = 1;
					}else if(i==1){
						n[i] = 1;
					}else{
						n[i] = n[i-1] + n[i-2];
					}
				}
				break;
			case 2: for(i=0; i<tam; i++){
					soma += i+1;
					n[i] = soma;
				}
				break;
			case 3: for(i=0; i<tam; i++){
					
					do{
						cont=0;
						for(j=1; j<=p; j++){
							if(p%j==0){
								cont++;
							}
						}
						if(cont==2){
							n[i] = p;
						}
						p++;
					}while(cont!=2);
				}
				break;
			case 4: for(i=0; i<tam; i++){
					n[i] = (i+1)*(i+1);
				}
				break;
			case 5: for(i=0; i<tam; i++){
					do{
						div++;
						if(div%3==0 && div%5==0){
							n[i] = div;
						}
					}while(div%3!=0 && div%5!=0);
				}
				break;
			case 6:
				break;
			default: cout << "\n\nDigite uma das opcoes validas dispostas no menu!!";
		}
		
		cout << "\n\nSequencia do setor que voce escolheu: \n\t";
		for(i=0; i<tam; i++){
			cout << n[i] << " "; 
		}
		
		cout << "\n\n";
		system("pause");
	}while(op!=6);
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
