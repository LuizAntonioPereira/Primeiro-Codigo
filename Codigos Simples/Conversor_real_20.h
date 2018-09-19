#include<iostream>

using namespace std;

int main(){
	
	float valor,conv;	
	
	cout<<"Digite um valor em reais para podermos converter."<<endl;
	cin>>valor;
	
	if(valor<500){
		conv = valor*0.29;
		cout<<conv<<endl;
	}
	else{
		conv = valor*0.24;
		cout<<conv<<endl;	
	}
	
}