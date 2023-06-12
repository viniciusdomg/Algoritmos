#include <iostream>
using namespace std;

/*
Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M 
pelo valor A inserindo os resultados em um vetor de V(36). Ao final, escreva o vetor V.
*/
const int tam=6;
int main() {

  int m[tam][tam], i, j, k=0, v[tam*tam], num;

  for(i=0; i<tam; i++){
    for(j=0; j<tam; j++){
      cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << ": ";
      cin >> m[i][j];
    }
  } 
  cout << "\nDigite o numero que deseja multiplicar por toda a matriz: ";
  cin >> num;

  for(i=0; i<tam; i++){
    for(j=0; j<tam; j++){
      v[k] = m[i][j]*num;
      k++;
    }
  }

  cout << "\nMatriz Original: ";
  for(i=0; i<tam; i++){
    cout << "\n\t";
    for(j=0; j<tam; j++){
      cout << m[i][j] << " ";
    }
  } 

  cout << "\nElementos do vetor: ";
  for(i=0; i<tam*tam; i++){
    cout << v[i] << " ";
  }
}
