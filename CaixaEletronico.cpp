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
	this->numeroCartaoCredito=origem.numeroCartaoCredito;
}



void CaixaEletronico::displayMessage()
{
	cout<<"\n Seja bem vindo!!\n\n"<<endl;
}



float CaixaEletronico::sacar(float saques)
{
	float a=saques;
	if(saldo>=saques){
		saldo=saldo-saques;
	}else{
		cout<<"\n Saldo insuficiente para realizacao de saques"<<endl;
	}
	return a;
}


float CaixaEletronico::depositar(float deposito)
{
	float c=deposito;
	saldo=saldo+deposito;
	return c;
}


float CaixaEletronico::transferir(float valorTransferido)
{
	float d=0.0;
	if(saldo>=valorTransferido){
		saldo=saldo-valorTransferido;
		d=valorTransferido;
	}else{
	cout<<"\n Saldo Insuficiente para realizar esta transferencia"<<endl;
	}
	return d;
}


void CaixaEletronico::mostrarSaldo()
{
	cout<<"\n Seu saldo é de "<<saldo<<" reais"<<endl;
	
}
