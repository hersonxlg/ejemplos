#include <iostream>
#include <algorithm>
#include <vector>
#include <regex>

using namespace std;

int main( int argc,char** argv ){

    vector<string> lista;
    lista.push_back("hola");
    lista.push_back("mundo");
    lista.push_back("nada");
    lista.push_back("trabajo");
    lista.push_back("noche");
    lista.push_back("nodo");
    lista.push_back("hada");
    cout<<"primera version: "<<endl;
    for_each( lista.begin(), lista.end(), [](string s){ cout<<s<<endl; } );
    auto condition = [](string s){
        regex r("h\\w*"); 
        return regex_match(s,r);
    };
    lista.erase(remove_if( lista.begin(), lista.end(), condition ),lista.end());
    cout<<"\nsegunda version: "<<endl;
    for_each( lista.begin(), lista.end(), [](string s){ cout<<s<<endl; } );
    return 0;
}
