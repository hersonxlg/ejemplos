#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv ) {

    if ( argc<2 ){
        return 1;
    }

    int y = stoi(argv[1]); // conver char* to double.
    auto f = [y](double x){ // funcion lambda para la potencia.
        double acum = 1;
        for( int i=0; i<y; i++ ){
            acum *= x;
        }
        return acum;
    };

    // implementar la funcon lambda con una serie de numeros.
    for( int i=0; i<10; i++ ){
        cout << i << "^" << y << " = " << f(i) << endl;
    }

    return 0;
}

