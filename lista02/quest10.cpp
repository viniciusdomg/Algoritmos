#include<iostream>
using namespace std;

/*
A nota final de um estudante e calculada a partir de tr�s notas atribu�das entre o intervalo de 0 at� 
10, respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. 
A m�dia das tr�s notas mencionadas anteriormente obedece aos pesos: Trabalho de Laborat�rio: 2; 
Avalia��o Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno 
est� reprovado (media entre 0 e 2,9), de recupera��o (entre 3 e 4,9) ou se foi aprovado.
*/

int main(){
	
	float not1, not2, not3, media;
	
	cout << "Digite a nota do trabalho de laboratorio do aluno : ";
	cin >> not1;
	cout << "Digite a nota da avaliacao do aluno : ";
	cin >> not2;
	cout << "Digite a nota do exame final do aluno : ";
	cin >> not3;
	
	media = ((not1*2)+(not2*3)+(not3*5))/10;
	if((media>=0)&&(media<=10)){
		
		if((media>=0)&&(media<3)) {
			cout << "\n\nESSE ALUNO ESTA REPROVADO!! " <<  media << endl;
		}else if((media>=3)&&(media<5)){
			cout << "\n\nEsse aluno ficou de recuperacao!! " << media << endl;
			cout << "\nPrecisa de " << 5-media << " para passar!" << endl;
		}else if(media>5){
			cout << "\n\nEste aluno estra APROVADO!!! " << media << endl;
		}	
	}else{
		cout << "\nAs notas que voce digitou nao estao entre 0 e 10!!\n";
	}
	
	system("pause");
}
