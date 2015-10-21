#ifndef CAIXAELETRONICO_H
#define CAIXAELETRONICO_H
class CaixaEletronico{
		
		public:
			CaixaEletronico(float, float, float, float);
			CaixaEletronico();
			void displayMessage();
			float sacar(float);
			float transferir(float);
			float depositar(float);
			float mostrarSaldo(float);
		
		private:
			
			float saldo;
			float saque;
			float transf;
			float dep;
	};
#endif
