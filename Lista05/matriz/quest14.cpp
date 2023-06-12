#include <iostream>
using namespace std;

/*
Elabore um algoritmo que leia uma matriz 4x5 de números reais. Em seguida,
calcule a soma dos elementos de cada coluna, armazenando o resultado da soma em
um vetor de 5 elementos. Escreva a matriz e o vetor.*/

int main() {

  int i, j, linha, coluna;
  cout << "DIgite quantas linhas tera a matriz: ";
  cin >> linha;
  cout << "\nDigite quantas colunas tera a matriz: ";
  cin >> coluna;

  float m[linha][coluna], v[coluna];

  cout << "\e[H\e[2J";
  cout << "Digite os elementos da matriz";
  for (i = 0; i < linha; i++) {
    for (j = 0; j < coluna; j++) {
      cout << "\nElemento [" << i + 1 << "] [" << j + 1 << "]: ";
      cin >> m[i][j];
    }
    v[i] = 0;
  }

  cout << "\n\nElementos da Matriz";
  for (i = 0; i < linha; i++) {
    cout << "\n";
    for (j = 0; j < coluna; j++) {
      cout << m[i][j] << " ";
      v[i] += m[i][j];
    }
    if (i == linha - 1) {
      cout << "\n\nSOMAS DAS COLUNAS\n\t";
      for (j = 0; j < coluna; j++) {
        cout << v[j] << ", ";
      }
    }
  }

  cout << "\n\nFIM DO PROGRAMA\n";
  system("pause");
}
