#include <iostream>
using namespace std;
/*
Fa�a um algoritmo que leia as matr�culas e as respectivas m�dias finais de v�rios alunos de uma turma, 
at� que seja digitada uma m�dia negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos 
aprovados (m�dia >=7), reprovados (m�dia <3) ou em recupera��o. Al�m disso, o algoritmo deve mostrar 
as matr�culas de todos os alunos que obtiveram m�dias superiores a 9.
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
  cout << "Alunos em recupera��o = " << rec << endl;
  
  system("pause");
}
