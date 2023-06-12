#include<iostream>
#include<string.h>
using namespace std;

/*
Elabore um algoritmo que leia uma frase em uma string e uma palavra em outra string, verifique e 
escreva se a palavra está contida na frase.
Entradas: “esta é a frase” e “frase”
Saída: a palavra “frase” está contida na frase “esta é a frase”.
*/

int main(){
    string frase, palavra, pedaco;
    int i;
    bool encontrada = false;

    cout << "\n\tDigite uma frase: ";
    getline(cin, frase);

    cout << "\n\tDigite uma palavra para comparar com a frase: ";
    getline(cin,palavra);

	cout << "\n\n";
    for(i=0; i<=(frase.length()-palavra.length()); i++){
        pedaco = frase.substr(i, palavra.length());
        cout << pedaco ;
        if(pedaco==palavra){
            encontrada = true; 
        }
    }
    if(encontrada){
        cout << "\n\tA palavra foi encontrada\n\t";
    }else{
        cout << "\n\tA palavra NAO foi encontrada";
    }
    
    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}
