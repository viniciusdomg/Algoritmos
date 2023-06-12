#include <iostream>
using namespace std;

/*
Elabore um algoritmo que leia uma matriz 3x3 e gere automaticamente uma nova
matriz que seja a matriz transposta da primeira (troque as linhas por colunas).
*/

int main() {

  int i, j, linha, coluna;
  cout << "Digite quantas linhas tera a matriz: ";
  cin >> linha;
  cout << "\nDigite quantas colunas tera a matriz: ";
  cin >> coluna;

  int m[linha][coluna], t[coluna][linha];

  cout << "\e[H\e[2J";
  cout << "Digite os elementos da matriz\n";
  for (i = 0; i < linha; i++) {
    for (j = 0; j < coluna; j++) {
      cout << "\nElemento [" << i + 1 << "] [" << j + 1 << "]: ";
      cin >> m[i][j];
    }
  }

  for (i = 0; i < linha; i++) {
    for (j = 0; j < coluna; j++) {
      t[j][i] = m[i][j];
    }
  }

  cout << "\n\nMatriz Original\n";
  for (i = 0; i < linha; i++) {
    cout << "\n";
    for (j = 0; j < coluna; j++) {
      cout << m[i][j] << " ";
    }
  }

  cout << "\n\nMatriz Transposta\n";
  for (i = 0; i < coluna; i++) {
    cout << "\n";
    for (j = 0; j < linha; j++) {
      cout << t[i][j] << " ";
    }
  }

  cout << "\n\nFIM DO PROGRAMA\n";
  system("pause");
}
