/*
 * Aparcamiento.cpp
 *
 *  Created on: 24 ene. 2021
 *      Author: Anas Nali
 */

#include "Aparcamiento.h"

Aparcamiento::Aparcamiento() {
	this -> capacidad=0;
	this -> plazasOcupadas=0;
}


Aparcamiento::Aparcamiento(int capacidad, int plazasOcupadas){

		this -> capacidad=capacidad;
		this -> plazasOcupadas=plazasOcupadas;
}

int Aparcamiento::getCapacidad(){
	return capacidad;
}

int Aparcamiento::getPlazasOcupadas(){
	return plazasOcupadas;
}

void Aparcamiento::setCapacidad(int capacidad){
	this -> capacidad=capacidad;
}

void Aparcamiento::setPlazasOcupadas(int plazasOcupadas ){
	this -> plazasOcupadas=plazasOcupadas;
}

int Aparcamiento::hayPlazasLibres(){
	if(capacidad-plazasOcupadas>0)
		return 1;
	else
		return 0;
}

void Aparcamiento::aumentarPlazasOcupadas(){
	plazasOcupadas++;
}

void Aparcamiento::solicitarAparcamiento(Coche p){
	if(hayPlazasLibres()){
		cout<<"El vehiculo "<<p.getMatricula()<<" ha sido registrado correctamente, puede aparcar en las zonas libres."<<endl;
		aumentarPlazasOcupadas();
	}else
		cout<<"Lamentablemente no hay aparcamiento libre para el vehiculo, "<<p.getMatricula()<<". Disculpe las molestias.";
}

Aparcamiento::~Aparcamiento() {
	// TODO Auto-generated destructor stub
}

