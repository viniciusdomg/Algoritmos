#include<iostream>
using namespace std;

int main(){
	
	float grauC, grauFar;
	
	cout << "Digite uma temperatura em graus celsius: ";
	cin >> grauC;
	
	grauFar = (9*grauC+160)/5;
	
	cout << "\n\nA temperatura em Farenheit e = " << grauFar << "\n\n";
	
	system("pause");
}
