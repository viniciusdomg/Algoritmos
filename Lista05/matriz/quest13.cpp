#include <iostream>
using namespace std;

/*
Elabore um algoritmo que leia os elementos inteiros positivos de uma matriz 3x3
de tal forma que os números pares sejam armazenados somente em linhas pares e os
números ímpares sejam armazenados somente em linha ímpares. Quando não houver
mais espaço para armazenar o número lido (par ou ímpar), o algoritmo deverá
informar e continuar pedindo novos números até que a matriz esteja preenchida.
Ao final escreva a matriz.
*/

const int tam = 3;
int main() {

  int m[tam][tam], l, c, k = 0, i = 0, j = 0, b = 0, num;
  bool x[tam][tam], par = false, impar = false;

  for (l = 0; l < tam; l++) {
    for (c = 0; c < tam; c++) {
      x[l][c] = false;
      m[l][c] = 0;
    }
  }

  do {
    cout << "\n\nDigite um numero inteiro qualquer para armazenar na matriz: ";
    cin >> num;
    if (j == tam) {
      j = 0;
    }
    if (b == tam) {
      b = 0;
    }
    if (num % 2 == 0) {
      if (par) {
        do {
          cout << "\n\nAs posicoes pares ja estao todas ocupadas\nDigite outro "
                  "numero: ";
          cin >> num;
        } while (num % 2 == 0);
      } else {
        while (i % 2 != 0 || x[i][tam-1]) {
          i++;
        }
        m[i][j] = num;
        x[i][j] = true;
        j++;
      }
    }
    if(num%2!=0){
      if (impar) {
        do {
          cout << "\n\nAs posicoes impares ja estao todas ocupadas\nDigite "
                  "outro numero: ";
          cin >> num;
        } while (num % 2 != 0);
      } else {
        while (k % 2 == 0 || x[k][tam-1]) {
          k++;
        }
         m[k][b] = num;
        x[k][b] = true;
        b++;
      }
    }
    for (l = 0; l < tam; l++) { 
      for (c = 0; c < tam; c++) {
        if(l % 2 == 0){  
          if (x[l][c]) {
            par = true;
          } else {
            par = false;
          }
        }else{
          if (x[l][c]) {
            impar = true;
          } else {
            impar = false;
          }
        }
      }
    }
    cout << "\n\n";
    for (l = 0; l < tam; l++) {
      cout << "\n";
      for (c = 0; c < tam; c++) {
        cout << m[l][c] << " ";
      }
    }
  } while (!par || !impar);
  cout << "\n\nFIM DO PROGRAMA\n";
  system("pause");
}
