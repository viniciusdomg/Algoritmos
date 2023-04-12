#include<iostream>
using namespace std;

int main() {
	
	int segundos, hora, min, seg;
	
	cout << "Digite uma quantidade de segundos: ";
	cin >> segundos;
	
	hora = segundos/3600;
	min = (segundos%3600)/60; 
	seg = (segundos%3600)%60;
	
	cout << "\n\nEssa e a quantidade em horas = " << hora << " horas " <<  min << " minutos e " << seg << " segundos";
	
	min = segundos/60;
	
	cout << "\n\nEssa e a quantidade dos segundos em horas = " << hora;
	cout << "\nEssa e a quantidade dos segundos em minutos = " << min;
	cout << "\nEssa e a quantidade em segundos = " << segundos << "\n\n";
	
	system("pause");
}
