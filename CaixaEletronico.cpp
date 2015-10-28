#include "CaixaEletronico.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

CaixaEletronico::CaixaEletronico(float sal=0.0, float saq=0.0, float transfer=0.0, float depos=0.0, const string &nome="", const string &numContas="", const string &numAgencias="", const string &numCCredito=""){
	
	
}
CaixaEletronico::CaixaEletronico(const CaixaEletronico &origem){
	this->saldo=origem.saldo;
	this->saque=origem.saque;
	this->transferencia=origem.transferencia;
	this->deposito=origem.deposito;
	this->nome=origem.nome;
	this->numeroConta=origem.numeroConta;
	this->numeroAgencia=origem.numeroAgencia;
}



void CaixaEletronico::displayMessage()
{
	cout<<"\n Seja bem vindo!!\n\n"<<endl;
}



float CaixaEletronico::sacar(float saques)
{
	float a=0.0;
	saldo>=saques?a=saldo-saques: a = 3;
	return a;
}


float CaixaEletronico::depositar(float deposito)
{
	float c=0.0;
	c=saldo+deposito;
	return c;
}


float CaixaEletronico::transferir(float valorTransferido)
{
	float d=0.0;
	saldo>=valorTransferido?this->d=saldo-valorTransferido:this->cout<<"\n Saldo Insuficiente para realizar esta transferencia"<<endl;
	return d;
}


void CaixaEletronico::mostrarSaldo()
{
	cout<<"\n Seu saldo é de"<<saldo<<" reais"<<endl;
	
}
