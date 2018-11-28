#include <iostream>
#include <cstdlib>
#include <vector>
#include <exception>
#include <iomanip>
#include <fstream>
#include "curso.h"

using namespace std;

//Contrutor
Curso::Curso(){}

//Destrutor
Curso::~Curso(){}

//Métodos Funcionario
void Curso::setNomeCurso(string nomeCurso){

	this->nomeCurso = nomeCurso;

}