#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um n�mero inteiro qualquer e verifique se ele �
quadrangular. Se for, mostrar os pr�ximos 10 quadrangulares depois dele. Se n�o for, informar. 
OBS: Os n�meros quadrangulares s�o 1, 4, 9, 16, 25, ..., ou seja, 1x1, 2x2, 3x3, 4x4, ...
*/

int main() {

  int num, quad = 0, cont=1, i;

  cout << "Digite um numero inteiro para verificar se � quadrangular: ";
  cin >> num;

  do{
    quad = cont*cont;
    if (quad == num) {
      cout << "\n\nEsse n�mero � um n�mero quadrangular";
      cout << "\n10 quadrangulares sucessores: ";
      for (i = 0; i < 10; i++) {
        cont++;
        quad = cont*cont;
        cout << quad << " ";
      }  
    }else if (quad>num){
      cout << "\n\nEsse numero n�o � quadrangular";
    }
    cont++;
  }while(quad<num);
  cout << "\n\n\nFIM DO PROGRAMA\n";
  system("pause");
}
*/

int main(){
	
	
}
