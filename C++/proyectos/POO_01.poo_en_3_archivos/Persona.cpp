#include "Persona.h"
#include <String>
#include <iostream>

using namespace std;

Persona::Persona(){
	this->nombre = "Juan";
	this->edad = 20;
}
Persona::Persona( String nombre, int edad ) {
	this->nombre = nombre;
	this->edad = edad;
}
ostream & operator<<(ostream& salida, Persona p ){
	salida << "nomabre: " << p.nombre << endl;
	salida << "edad: " << p.edad << endl;
	salida << endl << endl;
	return salida;
}
