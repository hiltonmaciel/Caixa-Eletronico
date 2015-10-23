#include <iostream>
#include <string>
using std:: string;
using std:: getline;

#ifndef CAIXAELETRONICO_H
#define CAIXAELETRONICO_H

class CaixaEletronico{
		
		public:
			CaixaEletronico(float = 0.0, float = 0.0, float 0.0, float 0.0, const string & = "", string & = "");
			CaixaEletronico(const CaixaEletronico &);
			void displayMessage();
			float sacar(float);
			float transferir(float);
			float depositar(float);
			float mostrarSaldo(float);
		
		private:
			
			float saldo;
			float saque;
			float transferencia;
			float deposito;
			string nome;
			string numeroConta;
	};
#endif
