#include <iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor S contendo os sal�rios dos funcion�rios de uma empresa com, 
no m�ximo, 100 funcion�rios, sendo que para terminar a entrada ser� fornecido o valor -1. Ap�s toda
a entrada ter sido realizada, leia o valor de um reajuste. Em seguida, gere e escreva um segundo 
vetor R contendo todos os sal�rios de S j� reajustados.
*/

int main() {
	
	int tam;	
	
  cout << "Digite quantos funcionarios tem sua empresa: ";
  cin >> tam;
  float s[tam], porcent; 
  int i=0, cont;
  bool reajuste;
  

  cout << "\n\nDigite os salarios dos funcionarios\n";
  do{
    cout << "\nSalario do " << i+1 << "o funcionario: ";
    cin >> s[i];
    i++;
  }while(s[i-1]!= -1 && i<tam);
  
  float r[i];
  
  do{
  	cout << "\nTeve aumento ou corte de gastos? (1-aumento, 0-corte): ";
  	cin >> reajuste;
  	cout << "\nQual foi a porcentagem do reajuste? ";
  	cin >> porcent;
  }while(porcent<0);
  
  if(porcent){
  	porcent = 1+(porcent/100);
  }else{
  	porcent = 1-(porcent/100);
  }
  
  for(cont=0; cont<i; cont++){
  	r[cont]= s[cont]*porcent;
  }
  cout << "\n";
  for(cont=0; cont<i; cont++){
  	cout << "\tSalario do " << cont+1 << " reajustado: " << r[cont] << "\n";
	   
  }
  
  cout << "\n\n\nFIM DO PROGRAMA\n";
  system("pause");
}
