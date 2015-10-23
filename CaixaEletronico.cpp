#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std:: string;
using std:: getline;

#include <CaixaEletronico.h>

CaixaEletronico::CaixaEletronico(float sal, float saq, float transfer, float depos, const string &nom, const string &numero){
	sal>0.0?this->saldo=sal:this->saldo=0.0;
}



void CaixaEletronico::displayMessage(){
	printf("\n Seja bem vindo!!\n\n");
}



float CaixaEletronico::sacar(float g){
	float a;
	a=saldo-g;
	return a;
}
