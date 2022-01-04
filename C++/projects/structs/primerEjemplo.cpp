#include <iostream>

using namespace std;

struct Persona {
    string nombre;
    int edad;
};

void showPersona( Persona p ){
    cout<<"Nombre:  "<<p.nombre<<endl;
    cout<<"Edad:    "<<p.edad<<endl;
}

int main( int argc, char** argv ){
    Persona p = {"Herson",12};
    showPersona(p);
    auto[name,age] = p;
    cout << "\n\n";
    cout << name <<endl;
    cout << age <<endl;
    return 0;
}
