#include <iostream>

using namespace std;

float soma(float , float );
float subtracao(float , float );
float multiplicacao(float , float );
float divisao(float , float );
void exibir(float n1, float n2);

int main(){
	
	// Peça dois números inteiros e exiba: 
	//soma, subtração, multiplicação, divisão inteira e resto
	
	float n1, n2;
	
	cout << "Informe um numero: ";
	cin >> n1;
	
	cout << "Informe outro numero: ";
	cin >> n2;
	
	cout << endl;
	
	exibir(n1, n2);
	
	return 0;
}


void exibir(float n1, float n2){
	cout << "Soma: " << soma(n1, n2) << endl;
	cout << "subtracao: " << subtracao(n1, n2) << endl;
	cout << "Multiplicacao: " << multiplicacao(n1, n2) << endl;
	if(n2 != 0){
		cout << "Divisao: " << divisao(n1, n2) << endl;
	}
	else{
		cout << "Nao pode dividir por zero" << endl;
	}
}

float soma(float n1, float n2){
	return n1 + n2;
}

float subtracao(float n1, float n2){
	return n1 - n2;
}

float multiplicacao(float n1, float n2){
	return n1 * n2;
}

float divisao(float n1, float n2){
	if(n2 != 0){
		return n1 / n2;
	}
}
