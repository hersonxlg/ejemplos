#ifndef _PERSONA
#define _PERSONA

#include <string.h>
#include <iostream>

using namespace std;

class Persona {
	private:
		string nombre;
		int edad;
	public:
		Persona();
		Persona(string,int);

	friend ostream & operator<<(ostream& , Persona );
};

#endif
