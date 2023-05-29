#include<iostream>
using namespace std;

/*
Elabore um algoritmo que mostre o calendário de um determinado mês. Os dados de entrada são o mês
(cujos dados devem ser mostrados) e o dia da semana em que esse mês inicia. Assuma que esse mês está
em um ano que não é bissexto, porém considere meses de 28, 30 e 31. O resultado deve ser como
mostrado abaixo. Ex: janeiro, começando na 5a feira: 
*/

int main(){
	
	int mes, dia, cont, quebrador, ultimoDay;
	int flag = true;
	
	do{
		cout << "Digite qual o mes deseja: ";
		cin >> mes;
	}while(mes<=0 && mes>12);
	cout << "\nQual o dia da semana se inicia esse mes? 1-Domingo, 2-Segunda... \n";
	cin >> dia;
	
	cout << "\n\n\tDom\tSeg\tTer\tQua\tQui\tSex\tSab\n";
	if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
		ultimoDay = 31;
	}else if(mes==2){
		ultimoDay = 28;
	}else{
		ultimoDay = 30;
	} 
	for(cont=0; cont<ultimoDay; cont++){
		if(flag==true){
			switch(dia){
				case 1: cout<< "\t" << cont+1;
					break;
				case 2: cout << "\t\t" << cont+1;
					break;
				case 3: cout << "\t\t\t" << cont+1;
					break;
				case 4: cout << "\t\t\t\t" << cont+1;
					break;
				case 5: cout << "\t\t\t\t\t" << cont+1;
					break;
				case 6: cout << "\t\t\t\t\t\t" << cont+1;
					break;
				case 7: cout << "\t\t\t\t\t\t\t" << cont+1;
					break;
				}
			}else{
				cout << "\t" << cont+1;
				quebrador = dia+cont;
				if(quebrador%7==0){
					cout << "\n";
				}
			}
			flag = false;
		}
		
	cout << "\n\n\nFIM do programa\n\n";
	system("pause");
}
