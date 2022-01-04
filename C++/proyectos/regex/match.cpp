#include <iostream>
#include <regex>

using namespace std;

int main( int argc, char** argv ){
    if( argc < 3 ){
        return -1;
    }
    string str = argv[1];
    string pattern = argv[2];
    regex r(pattern);
    smatch matches;
    cout<<"string: "<<str<<endl;
    cout<<"pattern: "<<pattern<<endl;
    cout << regex_search(str,r)<<endl;
    return 0;
}
