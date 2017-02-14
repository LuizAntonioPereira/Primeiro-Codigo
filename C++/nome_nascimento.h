#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	string nome;
	int idade,ano_nascimento;
	cout<<"Digite o seu nome">>;
	cin>>nome;
	cout<<"Digite sua data de nascimento">>;
	cin>>ano_nascimento;
	idade = 2016 - ano_nascimento;
	cout<< "A idade e" <<idade<<"anos";
	system("pause");	
}