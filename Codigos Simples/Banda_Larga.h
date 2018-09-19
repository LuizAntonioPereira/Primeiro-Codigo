//Bibliotecas
#include<iostream>
#include<stdlib.h>

using namespace std;

//Começo de um programa
int main (){
	
	//Variaval	

	//Variavel tipo inteiro
	int ta,t,v;
	
	//Comando de Saida
	cout<<"Digite o tamanho do arquivo";
	//Comando de Entra
	cin>>ta;
	
	cout<<"Digite o Tempo";
	cin>>t;
	
	v=ta%8/t;
	if(v>=1000000){
	cout<<"Banda Larga";
	}else{	
	cout<< "Banda Estreita";
	}
	//Pausa a Tela
	system("pause");	
}