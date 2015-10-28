
#include <string>
using std:: string;

//#ifndef CAIXAELETRONICO_H
//#define CAIXAELETRONICO_H

class CaixaEletronico{
		
		public:
			CaixaEletronico(float, float, float, float, const string &, const string &, const string &, const string &);
			CaixaEletronico(const CaixaEletronico &);
			void displayMessage();
			float sacar(float);
			float transferir(float);
			float depositar(float);
			void mostrarSaldo();
		
		private:
			
			float saldo;
			float saque;
			float transferencia;
			float deposito;
			string nome;
			string numeroConta;
			string numeroAgencia;
			string numeroCartaoCredito;
			const static string linkBancoDados="https://www.meubanco.com.br";
	};
//#endif
