#include<iostream>
using namespace std;

/*
A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 
10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. 
A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; 
Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno 
está reprovado (media entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.
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
