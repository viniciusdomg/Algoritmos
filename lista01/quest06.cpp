#include<iostream>
using namespace std;

int main(){
	
	float custoFab, custoConsu;
	
	cout << "Digite o custo de fabrica que voce teve com o carro: ";
	cin >> custoFab;
	
	custoConsu = custoFab+(custoFab*0.45)+(custoFab*0.28);
	
	cout << "\n\nEsse e o custo que o consumidor tera com o carro novo = " << custoConsu << "\n\n";
	
	system("pause");
}
