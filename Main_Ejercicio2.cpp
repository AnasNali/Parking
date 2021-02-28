//============================================================================
// Name        : Feedback2_AnasNali.cpp
// Author      : Anas Nali
// Version     : 1.0
// Description : Sistema de aparcamiento que consulta la cantidad de plazas ocupadas y asigna una plaza a los vehiculos que van llegando.
//Cuando alcanza su capacidad total no permite aparcar más coches.
//============================================================================

#include "Aparcamiento.h"
#include <iostream>
#include <string>



using namespace std;



int main(){

	int capacidadTotal;
	int plazasRestantes;

	//Aqui se pide al usuario ingresar los aparcamientos totales y cuantos de ellos estan ocupados.

	cout<<"Introduce la capacidad total de vehiculos que quieres que el parking tenga: "<<endl;
	cin>>capacidadTotal;
	cout<<"Introduce la cantidad de vehiculos que quieres que haya en el parking: "<<endl;
	cin>>plazasRestantes;

  Aparcamiento p1(capacidadTotal, plazasRestantes);
  cout<<"Buenas tardes, bienvenido al Parking Anas Nali. Quedan "<<p1.getCapacidad() - p1.getPlazasOcupadas()<<" Plazas Libres"<<endl;


  	 //Estos son los vehiculos que esperan a entrar en el aparcamiento.

  Coche coche1("Mercedes","8475KLP");
  p1.solicitarAparcamiento(coche1);
  cout<<"Quedan "<<p1.getCapacidad() - p1.getPlazasOcupadas()<<" Plazas Libres"<<endl;

  Coche coche2("Rolls Royce","5210LMN");
  p1.solicitarAparcamiento(coche2);

  Coche coche3("Fiat","2855FJH");
  cout<<"Quedan "<<p1.getCapacidad() - p1.getPlazasOcupadas()<<" Plazas Libres"<<endl;
  p1.solicitarAparcamiento(coche3);

  Coche coche4("Volskwagen","7548KNJ");
  cout<<"Quedan "<<p1.getCapacidad() - p1.getPlazasOcupadas()<<" Plazas Libres"<<endl;
  p1.solicitarAparcamiento(coche4);


  Coche coche5("Dacia","3698MNB");
  cout<<"Quedan "<<p1.getCapacidad() - p1.getPlazasOcupadas()<<" Plazas Libres"<<endl;
  p1.solicitarAparcamiento(coche5);


  Coche coche6("Fiat", "1747KPL");
  cout<<"Quedan "<<p1.getCapacidad() - p1.getPlazasOcupadas()<<" Plazas Libres"<<endl;
  p1.solicitarAparcamiento(coche6);



  return 0;
  system("PAUSE");
}
