#include <iostream>

using namespace std;

struct Data{
    int num;
    Data(int n){
        num = n;
        cout<<"inicio Data{"<<num<<"}"<<endl;
    }
    ~Data(){
        cout<<"fin Data{"<<num<<"}"<<endl;
    }
};

struct Data2{
    int num;
};

int main( int argc, char** argv ){
    Data d={1};
    {
        Data a={2};
    }
    {
        Data a={3};
    }
    Data2 dato = {2l};
    cout << "\n\ndato: "<<dato.num<<endl;
    return 0;
}
