/*
 * Aparcamiento.h
 *
 *  Created on: 24 ene. 2021
 *      Author: Anas Nali
 */

#ifndef Aparcamiento_H_
#define Aparcamiento_H_
#include "Coche.h"
#include <iostream>

class Aparcamiento {

private:
	int capacidad;
	int plazasOcupadas;

public:

	Aparcamiento();
	Aparcamiento(int capacidad, int plazasOcupadas); //Autorreferencia del objeto This
	virtual ~Aparcamiento();
	int getCapacidad();
	int getPlazasOcupadas();
	void setCapacidad(int capacidad);
	void setPlazasOcupadas(int plazasOcupadas );
	int hayPlazasLibres();
	void aumentarPlazasOcupadas();
	void solicitarAparcamiento(Coche p);
};

#endif /* Aparcamiento_H_ */
