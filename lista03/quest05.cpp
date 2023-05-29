#include <iostream>
using namespace std;
/*
Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma, 
até que seja digitada uma média negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos 
aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar 
as matrículas de todos os alunos que obtiveram médias superiores a 9.
*/
int main() {
  int mat, apv = 0, rpv = 0, rec=0;
  float medF;

  cout << "Digite a matricula do aluno: ";
  cin >> mat;
  cout << "Digite a media do aluno: ";
  cin >> medF;
  
  while(medF>=0){
    if(medF<3){
      rpv++;
    }else if(medF>=7){
      apv++;
      if(medF>9)
        cout << "\nAluno da matricula " << mat << " teve nota maior que 9 na media!";
    }else{
      rec++;
    }
    cout << "\n\nDigite a matricula do aluno: ";
    cin >> mat;
    cout << "Digite a media do aluno: ";
    cin >> medF;
  }

  cout << "\nAlunos aprovados = " << apv << endl;
  cout << "Alunos reprovados = " << rpv << endl;
  cout << "Alunos em recuperação = " << rec << endl;
  
  system("pause");
}
