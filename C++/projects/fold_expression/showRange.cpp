#include <iostream>

using namespace std;

void show(int init, int end){
    if ( init <= end ){
        cout << init << endl;
        show( init+1,end );
    }
}

int main( int argc, char** argv ){
    if ( argc < 3 ){
        return 1;
    }
    int beginRange = stoi(argv[1]);
    int endRange = stoi(argv[2]);
    show( beginRange,endRange );
    return 0;
}
