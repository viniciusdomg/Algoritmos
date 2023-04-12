#include<iostream>
using namespace std;

int main(){
	
	int val1, val2, val3;
	
	cout << "Digite 2 valores, um apos outro";
	cout << "\nOs valores serao invertidos e um recebera o valor do outro \n";
	cin >> val1;
	cin >> val2;
	
	val3 = val1;
	val1 = val2;
	val2 = val3;
	
	cout << "\n\nValor do primeiro agora e " << val1;
	cout << "\nValor do segundo agora e " << val2 << "\n\n";
	
	system("pause");
}
