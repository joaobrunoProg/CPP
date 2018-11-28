#include <iostream>
#include <cstdlib>
#include <vector>
#include <exception>
#include <iomanip>
#include <fstream>
#include "funcionario.h"

using namespace std;

//Contrutor
Funcionario::Funcionario(){}

//Destrutor
Funcionario::~Funcionario(){}

//Métodos Funcionario
void Funcionario::setNome(string nome){

	this->nome = nome;

}

void Funcionario::setIdade(int idade){

	this->idade = idade;

}

void Funcionario::setSexo(string sexo){

	this->sexo = sexo;

}

void Funcionario::setTelefone(string telefone){

	this->telefone = telefone;

}

void Funcionario::setEmail(string email){

	this->email = email;

}

void Funcionario::setCpf(string cpf){

	this->cpf = cpf;

}

void Funcionario::setCargo(string cargo){

	this->cargo = cargo;

}

void Funcionario::setSalario(double salario){

	this->salario = salario;

}

string Funcionario::getNome(){

	return nome;

}

int Funcionario::getIdade(){

	return idade;

}

string Funcionario::getSexo(){

	return sexo;

}

string Funcionario::getTelefone(){

	return telefone;

}

string Funcionario::getEmail(){

	return email;

}

string Funcionario::getCpf(){

	return cpf;

}

string Funcionario::getCargo(){

	return cargo;

}

double Funcionario::getSalario(){

	return salario;

}

ostream& operator << (ostream& os, const Funcionario& func){

	os << func.nome << "|" << func.idade << "|" << func.sexo << "|" << func.telefone << "|" << func.email << "|" << func.cpf << "|" << func.cargo << "|" << func.salario ;
				
	return os;

}

istream& operator >> (istream& is, Funcionario& func){

	is >> func.nome >> func.idade >> func.sexo >> func.telefone >> func.email >> func.cpf >> func.cargo >> func.salario;
	
	return is;

}