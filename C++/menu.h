//Bibliotecas
#include<iostream>
#include<stdlib.h>

using namespace std;

//Começo de um programa
int main (){
	
	//Variaval	

	//Variavel tipo inteiro
	int op;
	
	//Comando de Saida + quebra de linha endl
	cout<<"Menu"<<endl;
	cout<<"1.Comida Salgada"<<endl;
	cout<<"2.Comida Doce"<<endl;
	cout<<"3.Bebida"<<endl;
	cout<<"Escolha opção"<<endl;
	
	//Comando de Entra	
	cin>>op;	
	switch(op){
		case 1:{cout<<"R$20,00"<<endl;}
		case 2:{cout<<"R$25,00"<<endl;}
		case 3:{cout<<"R$50,00"<<endl;}
		default:{cout<<"Voce digitou errado digite entre 0-3";}		
	}
	
	//Pausa a Tela
	system("pause");	
}