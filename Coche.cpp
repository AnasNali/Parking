/*
 * Coche.cpp
 *
 *  Created on: 24 ene. 2021
 *      Author: Anas Nali
 */

#include "Coche.h"

Coche::Coche() {
	 marca="";
	 matricula="";

}

Coche::Coche(string marca, string matricula){
	this->marca=marca;
	this->matricula=matricula;
}

string Coche::getMarca(){
	return marca;
}

string Coche::getMatricula(){
	return matricula;
}


Coche::~Coche() {
	// TODO Auto-generated destructor stub
}
