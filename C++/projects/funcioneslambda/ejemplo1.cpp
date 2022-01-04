#include <iostream>

using namespace std;

int main( int argc, char** argv ){
    auto saludar = [](){cout<<"hola mundo."<<endl;};

    saludar();
    return 0;
}
