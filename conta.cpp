#include "conta.hpp"
#include <iostream>

void Conta::sacar(float valorASacar)
{

	if (valorASacar < 0)
	{
		std::cout << "Por favor, entre um valor válido" << std::endl;
		return;
	} // primeiro if

	if (valorASacar > saldo)
	{
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}

	saldo -= valorASacar;

}; 

void Conta::depositar(float valorADepositar)
{
	if (valorADepositar < 0)
	{
		std::cout << "Por favor, entre um valor válido" << std::endl;
		return;
	}

	saldo += valorADepositar;

}; 
