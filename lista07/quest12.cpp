#include<iostream>
using namespace std;

/*
Escreva uma função hm que converta minutos em horas-e-minutos. A função recebe um inteiro mnts e os endereços de
duas variáveis inteiras, h e m, e atribui valores a essas variáveis de modo que m seja menor que 60 e que 60*h + m 
seja igual a mnts. Elabore um algoritmo que teste a função hm.
*/
void hm(int minutos, int *hora, int *min);
int main(){
	int minutos, hora, min;
	
	do{
		cout << "Digite a quantidade de minutos que deseja transformar: ";
		cin >> minutos;
	}while(minutos<0);
	
	hm(minutos, &hora, &min);
		if(hora<10){
			if(min<10){
				cout << "\n\n >> 0" << hora << ":0" << min << ":00";		
			}else{
				cout << "\n\n >> 0" << hora << ":" << min << ":00";
			}
		}else{
			if(min<10){
				cout << "\n\n >> " << hora << ":0" << min << ":00";
			}else{
				cout << "\n\n >> " << hora << ":" << min << ":00";
			}
		}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}

void hm(int minutos, int *hora, int *min){
	*hora = minutos/60;
	*min = minutos - ((*hora)*60);
}
