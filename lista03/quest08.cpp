#include <iostream>
using namespace std;
/*
Uma rainha requisitou os servi�os de um monge, o qual exigiu o pagamento em 
gr�os de trigo da seguinte maneira: os gr�os de trigo seriam dispostos em um 
tabuleiro de xadrez, de tal forma que a primeira casa do tabuleiro tivesse um 
gr�o, e as casas seguintes o dobro da anterior. Considere que o tabuleiro de 
xadrez � 8x8 e que o n�mero da casa varia de 1-8 para a primeira linha, de 9-16 
para a segunda linha e assim sucessivamente. Construa um algoritmo que calcule 
quantos gr�os de trigo a Rainha dever� pagar ao monge a partir da leitura do 
n�mero da casa desejada. 
*/

int main()
{
    
    int trigo, casa, cont;
    
    cout << "Qual o n�mero da casa? ";
    cin >> casa;
    
    for(cont=0; cont<casa; cont++){
        if(cont==0){
        trigo = 1;
        }else
        trigo *= 2; 
    }
    
    cout << "\n\nA rainha dever� pagar " << trigo << " de trigo!\n\n";
    
    system("pause");
}

