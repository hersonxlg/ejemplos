#include <iostream>

using namespace std;

struct Pareja{
    int a;
    int b;
    int lista[3];
};

int main( int argc, char** argv ){
    cout << string(50, '\n');
    Pareja parejas[10];
    int index {1};
    for( Pareja& p :parejas ){
        p.a = {index};
        p.b = {index+1};
        p.lista[0] = {index+2};
        p.lista[1] = {index+3};
        index += 4;
    }

    index = 0;
    for( Pareja p :parejas ){
        cout << "parejas["<<index<<"].a: " << p.a;
        cout << endl;
        cout << "parejas["<<index<<"].b: " << p.b;
        cout << endl;
        cout << "parejas["<<index<<"].lista: { ";
        cout << p.lista[0];
        cout <<  ", ";
        cout <<  p.lista[1];
        cout << " }";
        cout << endl;
        cout << "************************************" << endl;
        cout << endl;
        index++;

    }

    cout << "\n\nOperaciones con bits: \n\n";
    cout << "a = 101" << endl;
    cout << "b = 001" << endl;
    unsigned int a = 0b101;
    unsigned int b = 0b001;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;


    cout << "\n\n arrays: \n\n";
    char c[] = { 'a','b','c','d','e','f' };
    for ( auto &e:c ){
        e = 0b0011'0000;
    }
    for ( auto e:c ){
        cout << e << endl;
    }

    return 0;
}
