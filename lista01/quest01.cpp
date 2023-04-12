#include<iostream>
using namespace std;

int main() {
	
	int anos, meses, dias, qtdTotalDias;
	
	cout << "Digite quantos anos voce tem: ";
	cin >> anos;
	cout << "\nDigite quantos meses se passaram desde seu ultimo aniversario: ";
	cin >> meses;
	cout << "\nDigite quantos dias se passaram desde o ultimo mes que voce completou: ";
	cin >> dias;
	
	qtdTotalDias = (anos*365)+(meses*30)+dias;
	
	cout << "\n\nSua tempo de vida em dias = " << qtdTotalDias << "\n\n";
	
	
	
	system("pause");
}
