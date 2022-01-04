#include <iostream>

using namespace std;

int main( int argc, char** argv ){
    auto sum = [](auto... num){return (num + ...);};
    cout<<" 1+2+3+4+5 = "<< sum(1,2,3,4,5)<<endl;
    return 0;
}
