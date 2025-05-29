#include <iostream>

using namespace std;

bool isPair(int n);

int main(){
	int num;
	
	cout << "Informe um numero inteiro: ";
	cin >> num;
	
	if(isPair(num)){
		cout << "E par" << endl;
	}
	else{
		cout << "E impar" << endl;
	}
	
	cout << (isPair(num) ? "Par" : "Impar");	 
}

bool isPair(int n){
	return (n % 2) == 0;
}
