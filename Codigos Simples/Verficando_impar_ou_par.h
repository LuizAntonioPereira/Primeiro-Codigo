#include<iostream>

using namespace std;

int main(){
	
	int num;
	
	cout<<"Digite um numero inteiro e sera dado se é impar ou par."<<endl;
	cin>>num;
	
	if(num%2==0){
		cout<<"Par";
	}
	else{
		cout<<"Impar";	
	}
	
}