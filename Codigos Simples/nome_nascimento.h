//Bibliotecas
#include<iostream>
#include<stdlib.h>

using namespace std;

//Começo de um programa
int main (){
	
	//Variaveis
	//Variavel tipo texto
	string nome;
	//Variavel tipo inteiro
	int idade,ano_nascimento;
	
	//Comando de Saida
	cout<<"Digite o seu nome";
	
	//Comando de Entra
	cin>>nome;
	
	cout<<"Digite sua data de nascimento";
	
	cin>>ano_nascimento;	
	
	idade = 2016 - ano_nascimento;
	
	cout<< "A idade e" <<idade<<"anos";
	
	//Pausa a Tela
	system("pause");	
}