/*
 * Coche.h
 *
 *  Created on: 24 ene. 2021
 *      Author: Anas Nali
 */


#ifndef Coche_H_
#define Coche_H_

#include <string>

using namespace std;

class Coche {

private:
	string marca;
	string matricula;

public:
	Coche();
	virtual ~Coche();
	Coche(string marca, string matricula);
	void mostrarCoche();
	string getMarca();
	string getMatricula();
};

#endif /* Coche_H_ */
