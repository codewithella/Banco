#include <iostream>
#include <string>

using namespace std;


int main()
{
	Conta umaConta; 
	
	umaConta.numero = "123456";
	umaConta.cpfTitular = "123.456.789-10";
	umaConta.nomeTitular = "Manuella";
	umaConta.saldo = 100;

	Conta outraConta; 

	outraConta.numero = "345678";
	outraConta.saldo = 200;

	depositar(outraConta, 500);

	cout << "Uma conta: " << umaConta.saldo << " Outra conta: " << outraConta.saldo << endl; 

}
